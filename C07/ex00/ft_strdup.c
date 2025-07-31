/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:17:39 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/23 07:05:31 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof (char) * ft_strlen(src));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strcpy(src, dest);
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "aller";
// 	char *dest = ft_strdup(src);
// 	printf("%s", dest);
// 	free(dest);
// 	return (0);
// }
