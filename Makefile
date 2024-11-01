# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achemlal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:18:21 by achemlal          #+#    #+#              #
#    Updated: 2024/10/31 15:33:28 by achemlal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isascii.c ft_memcpy.c ft_split.c ft_strlcpy.c ft_strtrim.c \
      ft_atoi.c ft_isdigit.c ft_memmove.c ft_strchr.c ft_strlen.c \
      ft_substr.c ft_bzero.c ft_isprint.c ft_memset.c ft_strdup.c \
      ft_strmapi.c ft_tolower.c ft_calloc.c ft_itoa.c ft_putchar_fd.c \
      ft_striteri.c ft_strncmp.c ft_toupper.c ft_isalnum.c ft_memchr.c \
      ft_putendl_fd.c ft_strjoin.c ft_strnstr.c ft_isalpha.c ft_memcmp.c \
      ft_putstr_fd.c ft_strlcat.c ft_strrchr.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -f $(OBJ)


# Clean up everything
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Rebuild the library
re: fclean all

