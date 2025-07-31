/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 04:32:31 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/24 13:19:53 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i ++;
	}
}

// int main(void)
// {
// 	int	size = 4;
// 	int	i = 0;
//     int    tab[] = {1, 2, 3, 4};
//     ft_rev_int_tab(tab,size);
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	} 
//     return (0);
// }