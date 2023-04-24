/* Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject); */


#include <unistd.h>
#include <stdio.h>
#include <string.h>


char	*ft_strchr(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	
	i = 0;
	while (s[i])
	{
		if (ft_strchr(reject, s[i]) != 0)
			break;
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	printf("STRCSPN : %ld\n", strcspn(av[1], av[2]));
	printf("FT_STRCSPN: %ld\n", ft_strcspn(av[1], av[2]));
}
