# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 14:26:29 by anados-s          #+#    #+#              #
#    Updated: 2023/04/11 14:26:29 by anados-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strdup.c ft_putstr_fd.c\
		ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_strtrim.c ft_putnbr_fd.c\
		ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_substr.c ft_strjoin.c ft_strmapi.c\
		ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_putendl_fd.c\
		ft_memmove.c ft_strlen.c ft_strrchr.c ft_calloc.c ft_putchar_fd.c ft_striteri.c\
		ft_toupper.c ft_isdigit.c ft_memchr.c ft_memset.c ft_split.c ft_itoa.c\
					

SRCS_bonus  = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c\
				ft_lstdelone.c ft_lstlast.c ft_lstclear.c\
				ft_lstnew.c  ft_lstmap.c ft_lstiter.c\


OBJS = $(SRCS:.c=.o)	

OBJS_bonus = $(SRCS_bonus:.c=.o)

CFLAGS = -Wall -Werror -Wextra

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus : $(OBJS_bonus)
	ar -crs $(NAME) $(OBJS_bonus)

$(NAME): $(OBJS)
	ar -crs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus