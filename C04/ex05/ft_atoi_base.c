/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:52:23 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/31 13:55:46 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	find_base(char	*base, char strc)
{
	int	jcrochet;

	jcrochet = 0;
	while (base[jcrochet])
	{
		jcrochet++;
		if (base[jcrochet] == strc)
			return (jcrochet);
	}
	return (0);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	result;
	long int	sign;

	result = 0;
	sign = 1;
	if (!checkbase(base))
		return (0);
	while (*str >= 9 && *str <= 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= ft_strlen(base))
		result = (result * ft_strlen(base)) + (find_base(base, *str++));
	return (result * sign);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 	{
// 		printf ("Error, too many arguments.\n");
// 		return (0);
// 	}
// 	if (argc < 3)
// 	{
// 		printf ("Error, not enough arguments.\n");
// 		return (0);
// 	}
// 	printf("%d", ft_atoi_base(argv[1], argv[2]));
// 	return (0);
// }