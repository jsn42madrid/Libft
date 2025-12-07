# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jesolano <jesolano@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/06 18:21:24 by jesolano          #+#    #+#              #
#    Updated: 2025/12/06 20:07:37 by jesolano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=cc

CFLAGS=-Wall -Werror -Wextra

RM=rm -f

LDFLAGS=-L.

LDLIBS=-lft

HDDIRS=-I includes/

SRC=ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putenl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \


OBJ=$(SRC:.c=.o)



$(NAME): ./libft.h
	@$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     libft.a     |"
	@echo "|   was created   |"
	@echo "[=================]"


all: $(NAME)

clean:
	@$(RM) $(OBJ) $(OBJBONUS)
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     XXXXX.o     |"
	@echo "|  was deleted    |"
	@echo "[=================]"

fclean: clean
	@$(RM) $(NAME) $(OBJBONUS)
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     libft.a     |"
	@echo "|   was removed   |"
	@echo "[=================]"

re: fclean all

.PHONY: clean fclean
