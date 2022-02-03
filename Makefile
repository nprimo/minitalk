# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprimo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 16:30:13 by nprimo            #+#    #+#              #
#    Updated: 2022/02/03 12:54:05 by nprimo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --quiet

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRV = srv
O_SRV = o_srv
SRVS = $(wildcard $(SRV)/*.c)
O_SRVS = $(patsubst $(SRV)/%.c, $(O_SRV)/%.o, $(SRVS))

CLN = cln
O_CLN = o_cln
CLNS = $(wildcard $(CLN)/*.c)
O_CLNS = $(patsubst $(CLN)/%.c, $(O_CLN)/%.o, $(CLNS))

INC = inc
LIBFT = ft_printf
LIBFT_A = ft_printf/libftprintf.a

NAME = server
NAME_CLN = client

RM = rm -rf

$(O_SRV)/%.o: $(SRV)/%.c
	@ mkdir -p $(O_SRV)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@  

$(O_CLN)/%.o: $(CLN)/%.c
	@ mkdir -p $(O_CLN)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@  

.PHONY: all re clean fclean

all: $(NAME) $(NAME_CLN)

$(NAME): $(LIBFT_A) $(O_SRVS)
	$(CC) $(CFLAGS) -o $@ $^ -I $(INC) $(LIBFT_A)

$(NAME_CLN): $(LIBFT_A) $(O_CLNS)
	$(CC) $(CFLAGS) -o $@ $^ -I $(INC) $(LIBFT_A)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT)

clean:
	$(RM) $(wildcard $(O_SRV)/*.o)
	$(RM) $(wildcard $(O_CLN/*.o))
	$(MAKE) clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME_SRV)
	$(RM) $(NAME_CLN)
	$(MAKE) fclean -C $(LIBFT)

re: fclean all

