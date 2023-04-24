/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:03:06 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/15 13:52:00 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		begin_list = begin_list ->next;
		i++;
	}
	return (i);
}
