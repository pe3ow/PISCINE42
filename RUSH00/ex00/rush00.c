/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccreton- <ccreton-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:41:04 by ccreton-          #+#    #+#             */
/*   Updated: 2025/07/13 18:16:53 by ccreton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line_up_down(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == x || col == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
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
		if (col == x || col == 1)
			ft_putchar('|');
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
		if (line == 1 || line == y)
			line_up_down(x);
		else
			line_middle(x);
		line++;
	}
}
