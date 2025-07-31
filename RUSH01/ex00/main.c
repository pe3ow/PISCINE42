/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:19:48 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/21 00:19:38 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	recursive_pass(int **solution, int **infos, int i, int j);

int	input_parsing(char *input)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (input[len] != '\0')
		len++;
	if (len != 31)
		return (0);
	while (input[i] != '\0')
	{
		if (i % 2 == 1 && input[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(input[i] >= '1' && input[i] <= '4'))
			return (0);
		i++;
	}
	return (1);
}

int	**matrix_creator(char *input)
{
	int	**result;
	int	i;

	i = 0;
	result = malloc(4 * sizeof(int *));
	result[0] = malloc (4 * sizeof(int));
	result[1] = malloc (4 * sizeof(int));
	result[2] = malloc (4 * sizeof(int));
	result[3] = malloc (4 * sizeof(int));
	while (input[i] != '\0')
	{
		if (i % 2 == 0)
			result[i / 8][(i / 2) % 4] = input[i] - '0';
		i++;
	}
	return (result);
}

void	big_free(int **tab)
{
	free(tab[0]);
	free(tab[1]);
	free(tab[2]);
	free(tab[3]);
	free(tab);
}

void	big_putchar(int **tab)
{
	int		i;
	int		j;
	char	to_write;

	i = 0;
	j = 0;
	to_write = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			to_write = tab[i][j] + '0';
			write (1, &to_write, 1);
			if (j < 3)
				write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	**infos;
	int	**solution;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!input_parsing(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	infos = matrix_creator(argv[1]);
	solution = matrix_creator("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0");
	if (recursive_pass(solution, infos, 0, 0))
		big_putchar(solution);
	else
		write(1, "Error\n", 6);
	big_free(infos);
	big_free(solution);
	return (0);
}
