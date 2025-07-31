/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:29:00 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/19 23:27:24 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argc > 1)
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
		if (argv[argc -1][i] == '\0')
		{
			write(1, "\n", 1);
			argc--;
			i = 0;
		}
	}
	return (0);
}
