/* Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead. */

#include <unistd.h>


void    ft_print_number(int n)
{
    char *str;

    str = "0123456789";
    if (n > 9)
        ft_print_number(n / 10);
    write(1, &str[n % 10], 1);
}

int main(void)
{
    int num;

    num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_print_number(num);
        write(1, "\n", 1);
        num++;
    }
}