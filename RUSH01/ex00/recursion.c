/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:20:23 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/20 13:25:37 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validity_check(int **solution, int **infos);
int	recursive_pass(int **solution, int **infos, int i, int j);

int	presence_check(int value, int **solution, int mode, int coline)
{
	int	i;

	i = 0;
	if (mode)
	{
		while (i < 4)
		{
			if (solution[i][coline] == value)
				return (0);
			i++;
		}
	}
	else
	{
		while (i < 4)
		{
			if (solution[coline][i] == value)
				return (0);
			i++;
		}
	}
	return (1);
}

int	recursion_checks(int **solution, int **infos, int i, int j)
{
	if (j == 3)
	{
		if (i == 3 && validity_check(solution, infos))
			return (1);
		else if (recursive_pass(solution, infos, i + 1, 0))
			return (1);
	}
	else
	{
		if (recursive_pass(solution, infos, i, j + 1))
			return (1);
	}
	return (0);
}

int	recursive_pass(int **solution, int **infos, int i, int j)
{
	int	value;

	value = 1;
	while (value <= 4 && i < 4)
	{
		if (presence_check(value, solution, 0, i)
			&& presence_check(value, solution, 1, j))
		{
			solution[i][j] = value;
			if (recursion_checks(solution, infos, i, j))
				return (1);
			solution[i][j] = 0;
		}
		value++;
	}
	return (0);
}
