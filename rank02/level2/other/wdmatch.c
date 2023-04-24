/* 
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$ */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_check_word(char *to_find, char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    
    while (str[j])
    {
        if (to_find[i] == str[j])
            i++;
        j++;
    }
    if (to_find[i] == '\0')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    int i;

    i = 0;

    if (ac == 3)
    {
        if (ft_check_word(av[1], av[2]) == 1)
                ft_putstr(av[1]);
    }
    write(1, "\n", 1);
}