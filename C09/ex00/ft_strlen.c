/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:00:34 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/30 11:38:31 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*s1;

// 	s1 = "59zer";
// 	printf("%d\n", ft_strlen(s1));
// 	return (0);
// }
