/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:39:58 by sbouzian          #+#    #+#             */
/*   Updated: 2025/02/23 14:49:53 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (2, "ERROR", 5);
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_is_corner(int row, int col, int x, int y)
{
	return ((row == 1 || row == y) && (col == x || col == 1));
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (ft_error(x, y))
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				if (ft_is_corner(row, col, x, y))
					ft_putchar('o');
				else if (row == 1 || row == y)
					ft_putchar('-');
				else if (col == 1 || col == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
