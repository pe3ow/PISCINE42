/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 02:31:01 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/27 06:45:20 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;
	int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	while (i < srclen)
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		sbonneau;	

	i = 0;
	sbonneau = 0;
	if (size <= 0)
		return (ft_strdup (""));
	while (i < size)
		sbonneau += ft_strlen(strs[i++]);
	str = malloc(sbonneau + (ft_strlen(sep) * size - 1) + 1);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		i++;
		if (i < size)
			ft_strcat(str, sep);
	}
	return (str);
}

int	main(void)
{
	char *strs[] = {"test1", "test2", "test3", "dsds", "dsds"};
	char	sep[] = ", ";
	char *str = ft_strjoin(5, strs, sep);
	printf("%s\n", str);
	free (str);
	return (0);
}