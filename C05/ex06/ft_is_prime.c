/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:47:16 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/19 23:59:21 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % i == 0)
		return (0);
	while (nb % i != 0)
	{
		i++;
		if (i != nb && nb % i == 0)
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(18));
// 	return (0);
// }