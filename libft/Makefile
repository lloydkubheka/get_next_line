# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xkubheka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/01 08:29:14 by xkubheka          #+#    #+#              #
#    Updated: 2018/06/17 07:53:50 by xkubheka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -I.

SRCS = 	ft_memccpy.c ft_putnbr_fd.c ft_striteri.c ft_strrchr.c ft_memchr.c \
        ft_putstr.c ft_strjoin.c ft_strsplit.c ft_atoi.c ft_memcmp.c \
        ft_putstr_fd.c ft_strlcat.c ft_strstr.c ft_bzero.c ft_memcpy.c \
        ft_strcat.c ft_strlen.c ft_strsub.c ft_isalnum.c ft_memdel.c \
        ft_strchr.c ft_strmap.c ft_strtrim.c ft_isalpha.c ft_memmove.c \
        ft_strclr.c ft_strmapi.c ft_tolower.c ft_isascii.c ft_memset.c \
        ft_strcmp.c ft_strncat.c ft_toupper.c ft_isdigit.c ft_putchar.c \
        ft_strcpy.c ft_strncmp.c ft_islower.c ft_putchar_fd.c ft_strdel.c \
        ft_strncpy.c ft_isprint.c ft_putendl.c ft_strdup.c ft_strnequ.c \
        ft_itoa.c ft_putendl_fd.c ft_strequ.c ft_strnew.c ft_memalloc.c \
        ft_putnbr.c ft_striter.c ft_strnstr.c

OBJS = *.o

RMV = rm -f
all : $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRCS)
	ar -rc $(NAME) $(OBJS)

clean:
	$(RMV) $(OBJS)

fclean:
	$(RMV) $(NAME) $(OBJS)

re: fclean all
