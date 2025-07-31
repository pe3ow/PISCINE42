/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:03:52 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/19 21:22:51 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		write(1, &argv[j][i], 1);
		i++;
		if (argv[j][i] == '\0' && j < argc)
		{
			write(1, "\n", 1);
			j++;
			i = 0;
		}
	}
	return (0);
}
