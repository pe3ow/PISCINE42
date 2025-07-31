/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:11:50 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/22 20:13:40 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	j;

	j = 0;
	if (min >= max)
		return (NULL);
	i = malloc(sizeof(int) * (max - min));
	while (j < (max - min))
	{
		i[j] = j + min;
		j++;
	}
	return (i);
}
// int main(void)
// {
// 	int	min = 0;
// 	int	max = 5;
// 	int *i = ft_range(min, max);
// 	int j = 0;
// 	while(j < (max - min))
// 	{
// 		printf("%d", i[j]);
// 		j++;
// 	}
// 	free(i);
// 	return(0);
// }
