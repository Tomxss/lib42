/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 09:49:39 by tcoetzee          #+#    #+#             */
/*   Updated: 2020/06/05 11:05:12 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/get_next_line.h"
#include "./includes/libft.h"

int main (int ac, char **av)
{
    int x;
    int fd;
    char *line;

    if (ac == 2)
    {
        x = 0;
        fd = open(av[1], O_RDONLY);
        if (fd == -1)
        {
            write(1, "File not Found.", 15);
            printf("%d", fd);
            return(0);
        }
        while (get_next_line(fd, &line) == 1)
        {
            ft_putstr(line);
            ft_putchar('\n');
        }
    }
    return(0);
}