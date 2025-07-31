/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 06:08:04 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/14 02:34:40 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporaire;

	temporaire = 0;
	temporaire = *b;
	*b = *a;
	*a = temporaire;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	ft_swap(&a, &b);
// 	printf("a = %d, b = %d\n", a, b);
// 	return (0);
// }