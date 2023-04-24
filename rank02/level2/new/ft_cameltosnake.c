/* Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$ */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

char    ft_tolower(char c)
{
    char new;

    new = c + 32;
    return (new);
}

int main(int ac, char **av)
{
    int i;
    int j;
    char    *newstr;

    i = 0;
    j = 0;
    newstr = malloc(sizeof(char) * ft_strlen(av[1]) + 1);
    if (!newstr)
        return (0);
    if (ac == 2)
    {
        while (av[1][i])
        {
            while (av[1][i] >= 97 && av[1][i] <= 122)
                newstr[j++] = av[1][i++]; 
            if (av[1][i] >= 65 && av[1][i] <= 90)
            {   
                newstr[j] = '_';
                j++;
                newstr[j] = ft_tolower(av[1][i]);
            }
            j++;
            i++;
        }
        newstr[j] = '\0';
    }
    printf("%s", newstr);
    write(1, "\n", 1);
}

*/

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				argv[1][i] = argv[1][i] + 32;
				write (1, "_", 1);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}