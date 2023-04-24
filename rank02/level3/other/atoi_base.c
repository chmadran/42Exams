/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:56:17 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/22 16:13:56 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res = res + str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res = res + str[i] - '7';
		else if (str[i] >= 'a' && str[i] <= 'z')
			res = res + str[i] - 'W';
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
    (void)ac;
    printf("%d", ft_atoi_base(av[1], 16));
}