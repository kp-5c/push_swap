# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/06 13:45:48 by ebenoist          #+#    #+#              #
#    Updated: 2025/06/06 13:46:06 by ebenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Push_swap.a

CC		= cc

CFLAGS	= -Wall -Werror -Wextra 

AR		= ar

ARFLAGS	= rcs

SRC		=	ft_printf.c\
			ft_putchar.c\
			ft_putnbr_hexa.c\
			ft_putnbr_unsigned.c\
			ft_putnbr.c\
			ft_putstr.c
	
OBJ		= $(SRC:.c=.o)

all : $(NAME) 

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) libft.a

re: fclean all

.PHONY: all clean fclean re