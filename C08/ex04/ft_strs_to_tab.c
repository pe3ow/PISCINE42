/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 05:20:06 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/31 12:21:38 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"
#include <stdlib.h>
#include <stdio.h>

int	ftstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*strcpyy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof (char) * (ftstrlen(src) + 1));
	if (!dest)
		return (NULL);
	strcpyy(dest, src);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*jcrochet;
	int			i;

	i = 0;
	jcrochet = malloc(sizeof(t_stock_str) * (ac +1));
	if (!jcrochet)
	{
		free(jcrochet);
		return (NULL);
	}
	while (i < ac)
	{
		jcrochet[i].str = av[i];
		jcrochet[i].copy = ft_strdup(av[i]);
		jcrochet[i].size = ftstrlen(av[i]);
		i++;
	}
	jcrochet[i].str = NULL;
	return (jcrochet);
}

// int	main(int	argc, char	**argv)
// {
// 	(void)argv;
// 	int		i;
// 	t_stock_str	*jcrochet = ft_strs_to_tab(argc -1, argv +1);
// 	while(i < argc -1)
// 	{
// 		printf("String : %s\n", jcrochet[i].str);
// 		printf("Copy  : %s\n", jcrochet[i].copy);
// 		printf("Size : %d\n", jcrochet[i].size);
// 		i++;
// 	}
// 	free(jcrochet);
// 	return (0);
// }