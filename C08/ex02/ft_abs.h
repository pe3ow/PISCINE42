/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 01:34:27 by lbardet-          #+#    #+#             */
/*   Updated: 2025/07/24 02:50:50 by lbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_absolute(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

# define ABS ft_absolute

#endif
