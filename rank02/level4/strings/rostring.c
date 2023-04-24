/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:53:48 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/15 15:28:31 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.*/

int main(int ac, char **av)
{
    int i;
    int end;
    int lock;
    int start;

    i = 0;
    lock = 0;
    if (ac == 2)
    {
        while (av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13)) // potentiels espaces au debut
            i++;
        start = i;
        while (!(av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))) // premier mot
            i++;
        end = i;
        while (av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
            i++;
        while (av[1][i])
        {
            while ((av[1][i] == 32 && (av[1][i + 1] == 32)) || ((av[1][i + 1] >= 9 && av[1][i + 1] <= 13) && (av[1][i] >= 9 && av[1][i] <= 13)))
                i++;
            if (av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
                lock = 1;
            write(1, &av[1][i], 1);
            i++;
        }
        if (lock == 1)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}