/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 06:20:30 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/14 02:35:35 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98 && a < b)
	{
		while (b <= 99)
		{
			write(1, &(char){a / 10 + '0'}, 1);
			write(1, &(char){a % 10 + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){b / 10 + '0'}, 1);
			write(1, &(char){b % 10 + '0'}, 1);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}

// int main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
