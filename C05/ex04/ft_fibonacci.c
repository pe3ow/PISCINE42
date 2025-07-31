/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 08:08:15 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/21 03:37:28 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// int	main(void)
// {
// 	printf("%d", ft_fibonacci(5));
// 	return(0);
// }

// Index :     0   1   2   3   4   5   6   7   ...
// Valeurs :   0,  1,  1,  2,  3,  5,  8, 13, ...

// valeur = valeur d'index -1 + index -2ls
