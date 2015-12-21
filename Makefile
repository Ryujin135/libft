# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rorengo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/15 16:19:42 by rorengo           #+#    #+#              #
#    Updated: 2015/12/15 16:31:40 by rorengo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h

SRC = ft_isascii.c \
	  ft_isprint.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_atoi.c \
	  ft_bzero.c \
	  ft_memccpy.c \
	  ft_memcpy.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_memcmp.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strdup.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strlen.c \
	  ft_strlcat.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strnew.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_strsplit.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_abs.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstnew.c \
	  ft_lstmap.c \
	  ft_copysign.c \
	  ft_copysignf.c \
	  ft_copysignl.c \
	  ft_signbit.c \
	  ft_signbitd.c \
	  ft_signbiti.c \
	  ft_signbitl.c \
	  ft_signbitld.c \
	  ft_signbitll.c \
	  ft_fabs.c \
	  ft_labs.c \
	  ft_llabs.c \

OBJ = $(SRC:.c=.o)

$(NAME): 
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean:		
	@rm -f $(OBJ)

fclean:	clean	
	@rm -f $(NAME)

re: fclean all
