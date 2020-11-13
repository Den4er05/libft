# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 16:08:32 by iadzuki           #+#    #+#              #
#    Updated: 2020/11/10 16:56:11 by iadzuki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =		ft_tolower.c	ft_toupper.c	ft_isprint.c	ft_isascii.c		\
		ft_isalnum.c	ft_isdigit.c	ft_isalpha.c	ft_atoi.c		\
		ft_strncmp.c	ft_strlen.c	ft_strchr.c	ft_strrchr.c		\
		ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memccpy.c		\
		ft_calloc.c	ft_memchr.c	ft_memcmp.c	ft_strdup.c		\
		ft_strlcpy.c	ft_strlcat.c	ft_memmove.c	ft_strnstr.c		\
		ft_itoa.c	ft_strjoin.c	ft_putchar_fd.c	ft_putstr_fd.c		\
		ft_putendl_fd.c	ft_putnbr_fd.c	ft_strtrim.c	ft_substr.c		\
		ft_strmapi.c	ft_split.c

B_SRC =		ft_lstnew.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c	\
		ft_lstdelone.c	ft_lstiter.c	ft_lstclear.c	ft_lstmap.c		\
		ft_lstadd_front.c

OBJ = $(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $?
	@ranlib $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(B_OBJ)
	ar rc $(NAME) $?
	@ranlib $(NAME)

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
