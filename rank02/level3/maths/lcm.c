/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:18:31 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/13 17:22:56 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    if ((a == 0) || (b == 0))
        return (0);
    if (a > b)
        n = a;
    else   
        n = b;
    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
}

int main(int ac, char **av)
{
    int n;
    int n1;
    int n2;
    
    (void)ac;
    n1 = 4;
    n2 = 5;
    n = lcm(n1, n2);
    printf("RESULT %d", n);
}