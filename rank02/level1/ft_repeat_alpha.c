/* Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged. If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$ */

#include <unistd.h>

int ft_index(char c)
{
    int j;
    char    *alphalow;
    char    *alphaup;
    
    j = 0;
    alphalow = "abcdefghijklmnopqrstuvwxyz";
    alphaup = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (c >= 97 && c <= 122)
    {
        while (alphalow[j] != c)
            j++;
        return (j);
    }
    else
    {
        while (alphaup[j] != c)
            j++;
        return (j);
    }
    return (0);
}

void    ft_print(char c, int count)
{
    while (count >= 0)
    {
        write(1, &c, 1);
        count--;
    }

}

int main(int ac, char **av)
{
    int i;
    int index;

    i = 0;
    index = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            index = ft_index(av[1][i]);
            ft_print(av[1][i], index);
            i++;
        }
    }
    write(1, "\n", 1);
}

