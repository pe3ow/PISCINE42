/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:58:02 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/14 03:25:44 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' )
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int i;
// 	char str[10] = "" ;
// 	i = ft_str_is_numeric(str);
// 	printf("%d", i);
// 	return (0);
// }