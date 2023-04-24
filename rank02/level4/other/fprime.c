/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:53:12 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/22 15:37:03 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int	main(int ac, char **av)
{
	int	i;
	int	number;

	if (ac == 2)
	{
		i = 1;
		number = atoi(av[1]);
		if (number == 1)
			write(1, "1", 1);
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				ft_putnbr(i);
				if (number == i)
					break ;
				write(1, "*", 1);
				number = number / i;
				i = 1;
			}
		}
	}
	write(1, "\n", 1);
}




