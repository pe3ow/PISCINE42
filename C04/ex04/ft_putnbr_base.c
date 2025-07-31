/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 06:07:41 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/31 22:05:58 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenbase;
	long	nb;

	nb = nbr;
	lenbase = ft_strlen(base);
	if (!checkbase(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= lenbase)
		ft_putnbr_base((nb / lenbase), base);
	ft_putchar(base[nb % lenbase]);
}

// int	ft_atoi(char *str)
// {
// 	int	sign;
// 	int	result;
// 	int	i;

// 	sign = 1;
// 	result = 0;
// 	i = 0;
// 	while (str[i] >= 9 && str[i] <= 32)
// 		i++;
// 	while (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (sign * result);
// }

// int	main(int argc, char **argv)
// {
// 	int	i = 0;

// 	if (argc < 3)
// 	{
// 		printf("Error, not enough arguments.\n");
// 		return (0);
// 	}
// 	if (argc > 3)
// 	{
// 		printf("Error, too many arguments.\n");
// 		return (0);
// 	}
// 	ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
// 	return (0);
// }
