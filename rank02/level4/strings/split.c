/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:40:01 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/16 13:45:27 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



char *ft_strncpy(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while (s2[i] && i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int word_count;
    char    **tab;

    i = 0;
    j = 0;
    k = 0;
    word_count = 0;

    while (str[i])
    {
        while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i])
            word_count++;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
    }
    tab = malloc(sizeof(char *) * word_count + 1);
    if (!tab)
        return (0);
    i = 0;
    while (str[i])
    {
        while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        j = i;
        while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (i > j)
        {
            tab[k] = malloc(sizeof(char) * (i - j) + 1);
            ft_strncpy(tab[k], &str[j], (i - j));
            k++;
        }
    }
    tab[k] = NULL;
    return (tab);

}

int main(int ac, char **av)
{
    int     i = 0;
    char    **tab;

    tab = ft_split(av[1]);
    printf("%s\n", tab[0]);
    printf("%s\n", tab[1]);
    printf("%s\n", tab[2]);
}