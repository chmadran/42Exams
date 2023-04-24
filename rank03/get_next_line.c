/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmadran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:04:25 by chmadran          #+#    #+#             */
/*   Updated: 2023/03/28 15:26:24 by chmadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    int     i;
    int     nbytes;
    char    c;
    char     *buffer = malloc(10000);

    i = 0;
    nbytes = 0;
    if (BUFFER_SIZE <= 0)
	    return (free(buffer), NULL);
    while ((nbytes = read(fd, &c, BUFFER_SIZE - BUFFER_SIZE + 1)) > 0)
    {
        buffer[i++] = c;
        if (c == '\n')
            break;
    }
    if ((!buffer[i - 1] && !nbytes) || nbytes == -1)
    {
        free(buffer);
        return (NULL);
    }
    buffer[i] =  '\0';
    return(buffer);
}