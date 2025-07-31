/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:15:39 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/14 22:29:38 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	int a;
// 	char s1[500]= "lgkjhsfg";
// 	char s2[500]= "asdasd";
// 	a = ft_strcmp(s1, s2);
// 	printf("%d", a);
// 	return(0);
// }