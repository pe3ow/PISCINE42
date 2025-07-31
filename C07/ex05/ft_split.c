/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:27:45 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/30 14:03:04 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_sep(char strc, char *charset)
{
	while (*charset)
	{
		if (strc == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	jcrochet;
	int	aronnet;
	int	result;

	aronnet = 0;
	jcrochet = -1;
	result = 0;
	while (str[++jcrochet])
	{
		while (str[jcrochet] == charset[aronnet])
		{
			aronnet++;
			if (charset[aronnet] == '\0')
			{
				aronnet = 0;
				result++;
			}
			jcrochet++;
		}
	}
	result += 1;
	return (result);
}

char	*malloc_word(char *start, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (start[len] && !is_sep(start[len], charset))
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		jcrochet;
	char	**tab;

	jcrochet = 0;
	tab = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			tab[jcrochet] = malloc_word(str, charset);
			if (!tab[jcrochet])
			{
				return (NULL);
			}
			jcrochet++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
		else
			str++;
	}
	tab[jcrochet] = (NULL);
	return (tab);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = -1;
	if (argc < 3)
	{
		printf("Error, not enough arguments\n");
		return (0);
	}
	if (argc > 3)
	{
		printf("Error, too many arguments\n");
		return (0);
	}
	tab = ft_split(argv[1], argv[2]);
	while (tab[++i] != NULL)
		printf("%s ", tab[i]);
	while (i != 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (0);
}
