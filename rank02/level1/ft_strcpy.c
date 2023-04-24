// ADD HEADER

/* Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2); */

#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char    *s1 = "abc";
    char    *s2 = "d";

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("post strcpy, s3 = %s", ft_strcpy(s1, s2));
}