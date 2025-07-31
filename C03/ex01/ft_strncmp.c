/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:01:25 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/15 01:54:59 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n -1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	while (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	int a;
// 	char s1[]= "adsfdf";
// 	char s2[]= "adsfd";
// 	a = ft_strncmp(s1, s2, 2);
// 	printf("%d", a);
// 	return(0);
// }
