# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprimo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 16:03:32 by nprimo            #+#    #+#              #
#    Updated: 2021/12/08 18:14:18 by nprimo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_printf.c 	\
				print_char.c	\
				print_str.c		\
				print_dig.c		\
				print_uns.c		\
				print_hex.c		\
				print_mem.c		\
				ft_putnbr_base.c


LIBFTDIR	=	./libft/ 
LIB			=	./libft/libft.a

OBJS		=	$(SRCS:.c=.o)

NAME		=	libftprintf.a

CC 			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

%.o: %.c 
	$(CC) $(CFLAGS) -I includes -c $< -o ${<:.c=.o} 

$(NAME):	$(LIB) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(LIB):
	$(MAKE) -C $(LIBFTDIR) 
	cp $(LIB) $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re
