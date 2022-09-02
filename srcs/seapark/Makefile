# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seapark <seapark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 01:36:51 by seapark           #+#    #+#              #
#    Updated: 2020/10/17 14:59:53 by seapark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c
FILES = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_split.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c

FILES_B = ft_lstnew.c \
		ft_lstadd_back.c \
		ft_lstlast.c \
		ft_lstsize.c \
		ft_lstadd_front.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS = $(FILES:%.c=%.o)

OBJS_B = $(FILES_B:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(FILES)
		$(CC) $(CFLAGS) $(FILES)

$(OBJS_B): $(FILES_B)
		$(CC) $(CFLAGS) $(FILES_B)

clean:
		rm -f $(OBJS) $(OBJS_B)

fclean: clean
		rm -f $(NAME) $(NAME_B)

re: fclean bonus

bonus: all $(OBJS_B)
	@$(CC) -c $(CFLAGS) $(FILES_B)
	@ar rcs $(NAME) $(OBJS_B)
