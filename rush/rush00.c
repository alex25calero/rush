/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 00:00:00 by user              #+#    #+#             */
/*   Updated: 2025/02/21 20:53:51 by albcamac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush(int x, int y)
{
    int row = 1;
    int col;

    if (x <= 0 || y <= 0)
        return;
    
    while (row <= y)
    {
        col = 1;
        while (col <= x)
        {
            if ((row == 1 && col == 1) || (row == y && col == x && x > 1 && y > 1))
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
