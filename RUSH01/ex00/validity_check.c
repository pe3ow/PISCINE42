/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:18:25 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/20 13:35:03 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	line_check(int info, int **solution, int line)
{
	int	i;
	int	tmp;
	int	visible;

	i = 0;
	tmp = 0;
	visible = 1;
	while (i < 4)
	{
		if (i == 0)
			tmp = solution[line][i];
		if (i > 0 && solution[line][i] > tmp)
		{
			tmp = solution[line][i];
			visible++;
		}
		i++;
	}
	if (visible == info)
		return (1);
	else
		return (0);
}

int	rev_line_check(int info, int **solution, int line)
{
	int	i;
	int	tmp;
	int	visible;

	i = 3;
	tmp = 0;
	visible = 1;
	while (i >= 0)
	{
		if (i == 3)
			tmp = solution[line][i];
		if (i < 3 && solution[line][i] > tmp)
		{
			tmp = solution[line][i];
			visible++;
		}
		i--;
	}
	if (visible == info)
		return (1);
	else
		return (0);
}

int	column_check(int info, int **solution, int column)
{
	int	i;
	int	tmp;
	int	visible;

	i = 0;
	tmp = 0;
	visible = 1;
	while (i < 4)
	{
		if (i == 0)
			tmp = solution[i][column];
		if (i > 0 && solution[i][column] > tmp)
		{
			tmp = solution[i][column];
			visible++;
		}
		i++;
	}
	if (visible == info)
		return (1);
	else
		return (0);
}

int	rev_column_check(int info, int **solution, int column)
{
	int	i;
	int	tmp;
	int	visible;

	i = 3;
	tmp = 0;
	visible = 1;
	while (i >= 0)
	{
		if (i == 3)
			tmp = solution[i][column];
		if (i < 3 && solution[i][column] > tmp)
		{
			tmp = solution[i][column];
			visible++;
		}
		i--;
	}
	if (visible == info)
		return (1);
	else
		return (0);
}

int	validity_check(int **solution, int **infos)
{
	if (line_check(infos[2][0], solution, 0) &&
		line_check(infos[2][1], solution, 1) &&
		line_check(infos[2][2], solution, 2) &&
		line_check(infos[2][3], solution, 3) &&
		rev_line_check(infos[3][0], solution, 0) &&
		rev_line_check(infos[3][1], solution, 1) &&
		rev_line_check(infos[3][2], solution, 2) &&
		rev_line_check(infos[3][3], solution, 3) &&
		column_check(infos[0][0], solution, 0) &&
		column_check(infos[0][1], solution, 1) &&
		column_check(infos[0][2], solution, 2) &&
		column_check(infos[0][3], solution, 3) &&
		rev_column_check(infos[1][0], solution, 0) &&
		rev_column_check(infos[1][1], solution, 1) &&
		rev_column_check(infos[1][2], solution, 2) &&
		rev_column_check(infos[1][3], solution, 3))
		return (1);
	else
		return (0);
}
