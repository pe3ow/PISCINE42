/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 06:29:21 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/31 13:03:58 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	jcrochet;
	unsigned int	wchantea;

	jcrochet = 0;
	wchantea = -1;
	while (jcrochet <= size - 1 && dest[jcrochet] != '\0')
		jcrochet++;
	while ((jcrochet + wchantea) <= size - 1 && src[wchantea != '\0'])
	{
		dest[jcrochet + wchantea] = src[wchantea];
		wchantea++;
	}
	if (jcrochet < size)
		dest[jcrochet + wchantea] = '\0';
	while (src[wchantea] != '\0')
		wchantea++;
	return (jcrochet + wchantea);
}

// int	main(int argc, char **argv)
// {
// 	unsigned int	jcrochet = ft_strlcat(argv[1], argv[2], 5);
// 	if (argc != 3)
// 		return (0);
// 	printf("%d\n", jcrochet);
// 	return(0);
// }