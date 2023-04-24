/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:28:32 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/13 17:34:13 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    if (n >= 0 && n <= 9)
        ft_putchar(n + '0');
}

int main(int ac, char **av)
{
    int n1;
    int n2;
    int tmp;

    if (ac == 3)
    {
        n1 = atoi(av[1]);
        n2 = atoi(av[2]);
        if (n1 > 0 && n2 > 0)
        {
            while (n2 != 0)
            {
                tmp = n2;
                n2 = n1 % n2;
                n1 = tmp;
            }
            ft_putnbr(n1);
        }
    }
    write(1, "\n", 1);
}