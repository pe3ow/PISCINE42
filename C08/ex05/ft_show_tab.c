/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:17:24 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/31 12:21:49 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

// #include "ft_stock_str.h"

// int	ftstrlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*strcpyy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[i] = src[i];
// 		i ++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*dest;

// 	dest = malloc(sizeof (char) * (ftstrlen(src) + 1));
// 	if (!dest)
// 		return (NULL);
// 	strcpyy(dest, src);
// 	return (dest);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	t_stock_str	*jcrochet;
// 	int			i;

// 	i = 0;
// 	jcrochet = malloc(sizeof(t_stock_str) * (ac +1));
// 	if (!jcrochet)
// 		return (NULL);
// 	while (i < ac)
// 	{
// 		jcrochet[i].str = av[i];
// 		jcrochet[i].copy = ft_strdup(av[i]);
// 		jcrochet[i].size = ftstrlen(av[i]);
// 		i++;
// 	}
// 	jcrochet[i].str = NULL;
// 	return (jcrochet);
// }

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	while (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + '0');
}

char	*putstrr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	jcrochet;

	jcrochet = 0;
	while (par[jcrochet].str)
	{
		putstrr(par[jcrochet].str);
		ft_putchar('\n');
		ft_putnbr(par[jcrochet].size);
		ft_putchar('\n');
		putstrr(par[jcrochet].copy);
		ft_putchar('\n');
		jcrochet ++;
	}
}

// int	main(int argc, char **argv)
// {
// 	struct s_stock_str *par = ft_strs_to_tab(argc -1, argv +1);
// 	ft_show_tab(par);
// 	return (0);
// }