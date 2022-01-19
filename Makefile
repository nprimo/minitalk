# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprimo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 16:30:13 by nprimo            #+#    #+#              #
#    Updated: 2022/01/19 16:42:53 by nprimo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRV = srv
O_SRV = o_srv
SRVS = $(wildcard $(SRV)/*.c)
O_SRVS = $(patsubst $(SRV)/%.c, $(O_SRV)/%.o, $(SRVS))

INC = inc
LIBFT = ft_printf
LIBFT_A = ft_printf/libftprintf.a

NAME_SRV = server
NAME_CLN = client

RM = rm -rf

$(O_SRV)/%.o: $(SRV)/%.c
	@ mkdir -p $(O_SRV)
	$(CC) $(CFLAGS) -I $(INC) -L $(LIBFT) -c $< -o $@  

.PHONY: all re clean fclean

$(NAME_SRV): $(LIBFT_A) $(O_SRVS)
	$(CC) $(CFLAGS) -o $@ $^ -I $(INC) $(LIBFT_A)

all: $(NAME_SRV)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT)

clean:
	$(RM) $(O_SRV)

fclean: clean
	$(RM) $(NAME_SRV)

re: fclean all

