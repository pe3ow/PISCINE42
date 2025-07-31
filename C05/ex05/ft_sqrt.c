/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:47:10 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/16 10:42:46 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	while (a * a <= nb)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(9));
// 	return (0);
// }
