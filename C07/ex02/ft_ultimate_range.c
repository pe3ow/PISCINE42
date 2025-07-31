/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 23:17:47 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/23 07:05:27 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	jcrochet;

	jcrochet = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	while (jcrochet < (max - min))
	{
		(*range)[jcrochet] = jcrochet + min;
		jcrochet++;
	}
	return (jcrochet);
}

// int	main(void)
// {
// 	int	*range;
// 	int	min = 0;
// 	int	max = 20;
// 	int	jcrochet = 0;
// 	int	size;
// 	size = ft_ultimate_range(&range, min, max);
// 	while(jcrochet < size)
// 	{
// 		printf("taille : %d\n", range[jcrochet]);
// 		jcrochet++;
// 	}
// 	free(range);
// 	range = NULL;
// 	return (0);
// }