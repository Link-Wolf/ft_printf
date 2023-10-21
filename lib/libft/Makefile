# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 08:35:04 by xxxxxxx           #+#    #+#              #
#    Updated: 2022/12/22 11:40:29 by xxxxxxx          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PREFIX		= src/
NAME 		= libft.a
SRCS_FILES	= ft_isspace.c ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c 		\
ft_putchar_fd.c ft_putstr_fd.c ft_strjoin.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c			\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c		\
ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c		\
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c	\
ft_substr.c ft_lstmap.c ft_lstnew.c ft_lstiter.c ft_lstlast.c ft_lstsize.c		\
ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstadd_front.c ft_utoa.c		\
ft_ultoa_base.c ft_utoa_base.c ft_strcontain.c ft_strcmp.c ft_tabmin.c			\
ft_tabmax.c ft_abs.c ft_lstcalendar.c ft_memcat.c ft_sort_int_tab.c				\
ft_lstmaxint.c ft_lstminint.c ft_sqrt.c ft_is_nodoubl.c ft_tab_size.c			\
ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c		\
ft_print_tab.c ft_atou.c ft_strndup.c ft_atobuf.c ft_memdup.c ft_min.c ft_max.c \
ft_sign.c ft_strgen.c ft_bufcat.c ft_bufclear.c ft_bufcpy.c \
get_next_line.c \

SRCS		= $(addprefix $(PREFIX), $(SRCS_FILES))
OBJS 		= $(SRCS:.c=.o)
CC			= @gcc
RM			= @rm -f
CFLAGS		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
