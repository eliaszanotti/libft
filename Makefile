# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 17:58:08 by ezanotti          #+#    #+#              #
#    Updated: 2022/11/08 19:09:00 by ezanotti         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_isalpha.c \
	srcs/ft_isdigit.c  \
	srcs/ft_isalnum.c  \
	srcs/ft_isascii.c  \
	srcs/ft_isprint.c  \
	srcs/ft_strlen.c   \
	srcs/ft_memset.c   \
	srcs/ft_bzero.c    \
	srcs/ft_memcpy.c   \
	srcs/ft_memmove.c  \
	srcs/ft_strlcpy.c  \
	srcs/ft_strlcat.c  \
	srcs/ft_toupper.c  \
	srcs/ft_tolower.c  \
	srcs/ft_strchr.c   \
	srcs/ft_strrchr.c  \
	srcs/ft_strncmp.c  \
	srcs/ft_memchr.c   \
	srcs/ft_memcmp.c   \
	srcs/ft_atoi.c     \
	srcs/ft_calloc.c   \
	srcs/ft_strdup.c   \
	srcs/ft_split.c    \
	srcs/ft_putchar_fd \

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

HEADER	= ./includes/ 

CC		= gcc
CFLAGS	= -g3 -Wall -Wextra -Werror

RM		= rm -f
AR		= ar rc

%.o: %.c
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
			${AR} ${CFLAGS} -I ${HEADER} ${NAME} ${OBJS}

all :		${NAME}

clean :
			${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re :		fclean all
