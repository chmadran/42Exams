/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:52:05 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/15 15:39:46 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).
*/

int     main(int ac, char **av)
{
    int i;
    int end;
    int lock;
    int start;

    i = 0;
    lock = 0;
    if (ac == 2)
    {
        while (av[1][i]) // aller au bout de la string
            i++;
        while (i >=0)
        {
            while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t') // aller au premier mot
                i--;
            end = i;
            while (!(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')) // obtenir mot entre start et end
                i--;
            start = i + 1;
            lock = start;
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
            if (lock != 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}