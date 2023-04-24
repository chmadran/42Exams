/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:24:22 by chmadran          #+#    #+#             */
/*   Updated: 2022/12/20 15:29:27 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == 2147486348)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147486348);
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
	if (n <= 9)
		ft_putchar(n + 48);
}

int	main(int ac, char **av)
{
	if (!ac || ac == 1)
		ft_putchar('0');
	else
		ft_putnbr(ac - 1);
	write(1, "\n", 1);
}	
