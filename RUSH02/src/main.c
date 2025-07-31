/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 23:27:15 by memillet          #+#    #+#             */
/*   Updated: 2025/07/29 14:52:45 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "numbdict.h"
#include "basic.h"

t_dico	*splitdict(int size, char *reaad);
void	free_tab(char **tab);
void	free_dict(t_dico *dict);
void	print_value(char **tab2, t_dico *dict);
char	**tab_3(char *str);

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	reaad[BUFFER];
	t_dico	*dict;
	char	**tab2;

	if (argc != 2)
		return (1);
	if (argv[1][0] == '0')
		write (1, "0", 1);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	size = read(fd, reaad, BUFFER);
	if (!size)
		return (1);
	dict = splitdict(size, reaad);
	close(fd);
	tab2 = tab_3(argv[1]);
	print_value(tab2, dict);
	free_tab(tab2);
	free_dict(dict);
	return (0);
}
