# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achemlal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:18:21 by achemlal          #+#    #+#              #
#    Updated: 2024/11/07 18:57:50 by achemlal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isascii.c ft_memcpy.c ft_split.c ft_strlcpy.c ft_strtrim.c \
      ft_atoi.c ft_isdigit.c ft_memmove.c ft_strchr.c ft_strlen.c \
      ft_substr.c ft_bzero.c ft_isprint.c ft_memset.c ft_strdup.c \
      ft_strmapi.c ft_tolower.c ft_calloc.c ft_itoa.c ft_putchar_fd.c \
      ft_striteri.c ft_strncmp.c ft_toupper.c ft_isalnum.c ft_memchr.c \
      ft_putendl_fd.c ft_strjoin.c ft_strnstr.c ft_isalpha.c ft_memcmp.c \
      ft_putstr_fd.c ft_putnbr_fd.c ft_strlcat.c ft_strrchr.c
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)	

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

%.o: %.c libft.h 
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

bonus: $(OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "Library $(NAME) with bonus created."

clean :
	@rm -f $(OBJ) $(BONUS_OBJ)


# Clean up everything
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Rebuild the library
re: fclean all

.PHONY:  clean 
