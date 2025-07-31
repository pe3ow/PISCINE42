/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 06:19:23 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/16 23:33:11 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	while (power != 1)
	{
		nb *= a;
		power--;
	}
	return (nb);
}
// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(5,5));
// 	return (0);
// }