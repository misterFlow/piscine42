/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:30:30 by fguy              #+#    #+#             */
/*   Updated: 2021/07/11 17:36:06 by fguy             ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

#include <unistd.h>

void	ft_putchar(char g_c);

int	g_x;
int	g_y;

void	check_format(int x, int y)
{
	if (x == g_x && y == 1 || x == 1 && y == g_y)
	{
		ft_putchar('C');
	}
	else if (x == 1 && y == 1 || x == g_x && y == g_y)
	{
		ft_putchar('A');
	}
	else if (x == 1 || y == 1 || x == g_x || y == g_y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	count_x;
	int	count_y;

	g_x = x;
	g_y = y;
	count_x = 0;
	count_y = 0;
	if (x > 0 && y > 0)
	{
		while (count_y++ < g_y)
		{
			while (count_x++ < g_x)
			{
				check_format(count_x, count_y);
			}
			write(1, "\n", 2);
			count_x = 0;
		}
	}
}
