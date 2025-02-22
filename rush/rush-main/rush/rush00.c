/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:00:00 by user              #+#    #+#             */
/*   Updated: 2025/02/22 14:20:06 by alegarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (2, "error", 5);
		return ;
	}
}

int	ft_is_corner(int row, int col, int x, int y)
{
	return ((row == 1 && col == 1) || (row == y && col == x && x > 1 && y > 1));
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	ft_error(x, y);
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (ft_is_corner(row, col, x, y))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('C');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
