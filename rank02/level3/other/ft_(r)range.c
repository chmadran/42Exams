/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:30:26 by chmadran          #+#    #+#             */
/*   Updated: 2022/12/20 16:55:08 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	long int	i;
	long int	len;
	int	*tab;

	i = 0;
	len = end >= start ? (end - start) : (start - end); 
	tab = malloc(sizeof(tab) * len + 1);
	if (!tab)
		return (NULL);
	while (start != end)
		tab[i++] = end > start ? start++ : start--;
	tab[i] = start;
	return (tab);
}

int	*ft_rrange(int start, int end)
{
	long int	i;
	long int	len;
	int	*tab;

	i = 0;
	len = end >= start ? (end - start) : (start - end); 
	tab = malloc(sizeof(tab) * len + 1);
	if (!tab)
		return (NULL);
	while (start != end)
		tab[i++] = end > start ? end-- : end++;
	tab[i] = end;
	return (tab);
}

int	main(void)
{
	int	*tab;
	int	*revtab;

	tab = ft_range(1, 3);
	revtab = ft_rrange(1, 3);	
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	printf("%d, %d, %d\n", revtab[0], revtab[1], revtab[2]);
	
	tab = ft_range(-1, 1);
	revtab = ft_rrange(-1, 1);
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	printf("%d, %d, %d\n", revtab[0], revtab[1], revtab[2]);

	tab = ft_range(0, 0);
	revtab = ft_rrange(0, 0);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[0]);

}
