/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:20:21 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/13 17:47:09 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$ */


#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147486348)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147486248);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign= 1;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	ft_denominator(int n1, int n2)
{
	int	den;

	den = 0;
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 = n1 - n2;
		else
			n2 = n2 - n1;	
	}
	return (n1);
}

int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	int	den;

	// printf("n1 : %d\n", n1);
	// printf("n2 : %d\n", n2);
	// ft_putnbr(n1);
	// write(1, "\n", 1);
	// ft_putnbr(n2);
	
	if (ac == 3)
	{
		n1 = ft_atoi(av[1]);
		n2 = ft_atoi(av[2]);
		den = ft_denominator(n1, n2);
		ft_putnbr(den);
	}
	write(1, "\n", 1);
}
