/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:52:08 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/14 02:34:44 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 3;
// 	int	div;
// 	int	mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("result = %d, remainder = %d\n", div, mod);
// 	return (0);
// }
