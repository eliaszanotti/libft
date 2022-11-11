# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 17:58:08 by ezanotti          #+#    #+#              #
#    Updated: 2022/11/11 13:10:36 by ezanotti         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c \
	srcs/ft_isascii.c srcs/ft_isprint.c srcs/ft_strlen.c srcs/ft_memset.c \
	srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_strlcpy.c \
	srcs/ft_strlcat.c srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_strchr.c \
	srcs/ft_strrchr.c srcs/ft_strncmp.c srcs/ft_memchr.c srcs/ft_memcmp.c \
	srcs/ft_strnstr.c srcs/ft_atoi.c srcs/ft_calloc.c srcs/ft_strdup.c \
	srcs/ft_substr.c srcs/ft_strjoin.c srcs/ft_strtrim.c srcs/ft_split.c \
	srcs/ft_itoa.c srcs/ft_strmapi.c srcs/ft_striteri.c srcs/ft_putchar_fd.c \
	srcs/ft_putstr_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

SRCS_B	= srcs/ft_lstnew.c srcs/ft_lstadd_front.c srcs/ft_lstsize.c \
	srcs/ft_lstlast.c srcs/ft_lstadd_back.c srcs/ft_lstdelone \
	srcs/ft_lstclear.c srcs/ft_lstiter.c srcs/ft_lstmap.c

OBJS_B	= ${SRCS_B:.c=.o}

NAME	= libft.a

HEADER	= . 

CC		= cc
CFLAGS	= -g3 -Wall -Wextra -Werror

RM		= rm -f
AR		= ar rcs

all :		${NAME}

%.o: %.c
			${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} 
			${AR} ${NAME} ${OBJS}

bonus :	 	${OBJS} ${OBJS_B}
			${AR} ${NAME} ${OBJS} ${OBJS_B}

clean :
			${RM} ${OBJS} ${OBJS_B}

fclean :	clean
			${RM} ${NAME}

re :		fclean all

