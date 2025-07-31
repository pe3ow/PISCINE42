/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccreton- <ccreton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:42:39 by ccreton-          #+#    #+#             */
/*   Updated: 2025/07/13 18:17:09 by ccreton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line_up(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		col++;
	}
	ft_putchar('\n');
}

void	line_down(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		col++;
	}
	ft_putchar('\n');
}

void	line_middle(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	if (x <= 0 || y <= 0)
		return ;
	line = 1;
	while (line <= y)
	{
		if (line == 1)
			line_up(x);
		else if (line == y)
			line_down(x);
		else
			line_middle(x);
		line++;
	}
}
