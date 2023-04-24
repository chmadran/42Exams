/* Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2); */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(int ac, char **av)
{
    char *s1 = av[1];
    char *s2 = av[2];

    (void)ac;
    printf("resultat : %d\n", ft_strcmp(s1, s2));
    printf("resultat averre: %d\n", strcmp(s1, s2));
}