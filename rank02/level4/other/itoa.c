/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:28:01 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/18 16:42:57 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int len;
    int n = nbr;
    char    *str;
    
    len = 0;

    if (n <= 0)
        len++;
    
    while (n)
    {
        n = n / 10;
        len++;
    }
    
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    
    str[len] = '\0';
    len--;

    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
    {
        str[0] = '-';
        n = n * -1;
    }
    
    while (n)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
        len--;
    }
    return (str);
}



int main(void)
{
    int n;
    char *str;

    n = 899;
    str = ft_itoa(n);
    printf("%s", str);
}