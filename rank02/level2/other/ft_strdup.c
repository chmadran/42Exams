
/* Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src); */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

char    *ft_strdup(char *src)
{
    char    *newstr;
    int i;

    i = 0;
    newstr = malloc(sizeof(char) * ft_strlen(src) + 1);
    if (!newstr)
        return (0);
    while (src[i])
    {
        newstr[i] = src[i];
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}

int main(int ac, char **av)
{
    char *newstr1 = ft_strdup(av[1]);
    char *newstr2 = strdup(av[1]);

    printf("%s\n", newstr1);
    printf("%s\n", newstr2);
}