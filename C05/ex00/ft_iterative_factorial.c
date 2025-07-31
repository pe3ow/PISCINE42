/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 02:45:00 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/17 18:38:48 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb -1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i != 0)
	{
		nb *= i;
		i --;
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}