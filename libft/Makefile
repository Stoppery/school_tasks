# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 19:48:37 by dsherie           #+#    #+#              #
#    Updated: 2020/11/02 17:32:17 by dsherie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

FLAG=-Wall -Wextra -Werror

OBJ_PATH = ./objs/

SRC_NAME=	ft_bzero.c   		\
			ft_memccpy.c 		\
			ft_memchr.c  		\
			ft_memcmp.c  		\
			ft_memcpy.c  		\
			ft_memmove.c 		\
			ft_memset.c  		\
			ft_strchr.c  		\
			ft_strlcat.c 		\
			ft_strlcpy.c 		\
			ft_strlen.c  		\
			ft_strrchr.c 		\
			ft_strnstr.c 		\
			ft_strncmp.c 		\
			ft_isalpha.c 		\
			ft_isdigit.c 		\
			ft_isalnum.c 		\
			ft_isascii.c 		\
			ft_isprint.c 		\
			ft_toupper.c 		\
			ft_tolower.c 		\
			ft_atoi.c    		\
			ft_calloc.c  		\
			ft_strdup.c  		\
			ft_substr.c  		\
			ft_strjoin.c 		\
			ft_strtrim.c 		\
			ft_split.c   		\
			ft_itoa.c 	 		\
			ft_strmapi.c		\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			
OBJ_NAME = $(SRC_NAME:.c=.o)

BONUS =		ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\

OBJ_BONUS = ${BONUS:.c=.o}

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

OBJ_B = $(addprefix $(OBJ_PATH), $(OBJ_BONUS))

CC = gcc $(FLAG)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_PATH)%.o: %.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@rm -f $(OBJ) $(OBJ_B)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@rm -f $(NAME)

bonus: $(OBJ_B)
	@ar rc $(NAME) $(OBJ_B)
	@ranlib $(NAME)

re: fclean all
