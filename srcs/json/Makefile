#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sonleave25 <sonleave25@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/10 02:29:11 by sonleave25        #+#    #+#              #
#    Updated: 2021/01/29 18:04:16 by json             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_memset.c\
	  ft_bzero.c\
	  ft_calloc.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strlcat.c\
	  ft_strlcpy.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strnstr.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_split.c\
	  ft_strtrim.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strmapi.c\
	  ft_itoa.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c

LST = ft_lstnew.c\
	  ft_lstadd_front.c\
	  ft_lstsize.c\
	  ft_lstlast.c\
	  ft_lstadd_back.c\
	  ft_lstdelone.c\
	  ft_lstclear.c\
	  ft_lstiter.c\
	  ft_lstmap.c

ifdef BONUS_PART
	SOURCE = $(SRC) $(LST)
else
	SOURCE = $(SRC)
endif

OBJECT = $(SOURCE:.c=.o)

$(NAME) : $(OBJECT)
	ar rcs $(NAME) $(OBJECT)
$(OBJECT) : $(SOURCE)
	$(CC) $(CFLAGS) -c $(SOURCE)

all : $(NAME)

bonus :
	make BONUS_PART=1 all

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
