/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:52:41 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/14 02:34:51 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 3;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("result : %d, remain : %d\n", a, b);
// 	return (0);
// }