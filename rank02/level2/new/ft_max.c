
/* Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns */

#include <stdio.h>

int		ft_max(int* tab, unsigned int len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i <= len)
    {
        i = tab[i];
        if (i > j)
            j = i;
        i++;
    }
    return (j);
}

int main(void)
{
    int tab[4] = { 1, 5, 3, 4 };

    if (tab)
    {
        printf("%d", ft_max(tab, 4));
    }
    else
        printf("0");
}