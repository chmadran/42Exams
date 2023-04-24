#include <stdio.h>

int    ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char    temp;

    i = 0;
    len = ft_strlen(str) - 1;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}

int main(int ac, char **av)
{
    (void)ac;
    printf("%s", ft_strrev(av[1]));
}