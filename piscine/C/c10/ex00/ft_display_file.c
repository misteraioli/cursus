/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niperez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:56:40 by niperez           #+#    #+#             */
/*   Updated: 2024/05/17 23:09:22 by niperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	display_file(char *filename)
{
	int		fd;
	int		length;
	char	buffer[256];

	length = 1;
	fd = open(filename, 'r');
	while (length > 0)
	{
		length = read(fd, buffer, 256);
		write(1, buffer, length);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else{
		fd = open(argv[1], 'r');
		if (fd < 0)
			ft_putstr("Cannot read file.\n");
		else
		{
			close(fd);
			display_file(argv[1]);
		}
	}
}
