/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 04:21:29 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/16 20:20:58 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (!(str[i] - 1 >= 'a' && str[i] - 1 <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	ft_strcapitalize(str);
	printf("%s", str);
	return(0);
}