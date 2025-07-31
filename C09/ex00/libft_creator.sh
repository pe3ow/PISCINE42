# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbardet- <lbardet-@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/28 10:09:20 by lbardet-          #+#    #+#              #
#    Updated: 2025/07/31 13:54:30 by lbardet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

ranlib libft.a

rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o