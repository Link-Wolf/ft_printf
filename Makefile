# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 17:33:35 by xxxxxxx           #+#    #+#              #
#    Updated: 2022/12/08 15:08:07 by xxxxxxx          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	./lib/libft/
SRC_DIR		=	./src/

SRC_FILES	= 	ft_printf ft_parse ft_split_module ft_stringify checkers \
				expend_arg parsers/c parsers/d parsers/great_x parsers/i \
				parsers/p parsers/percent parsers/s parsers/u parsers/x  \
				parsers/f parsers/apply_width parsers/update_flag

SRCS		=	$(addsuffix .c, $(addprefix $(SRC_DIR), $(SRC_FILES)))
OBJS		=	$(SRCS:.c=.o)

CC			=	@gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	@rm -f

all: $(NAME)

bonus: all

$(NAME): $(OBJS) $(LIBFT)libft.a
	@cp $(LIBFT)libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)
	@printf "\e[36m\tCompilation \t[ ✓ ]\n\e[39m"

$(LIBFT)libft.a:
	@$(MAKE) -C $(LIBFT)
	@printf "\e[95m\tLibft \t\t[ ✓ ]\n\e[39m"

clean:
	@$(MAKE) clean -C $(LIBFT)
	$(RM) $(OBJS)
	@printf "\e[31m\tClean \t\t[ ✓ ]\n\e[39m"

fclean: clean
	@$(MAKE) fclean -C $(LIBFT)
	$(RM) $(NAME) test
	@printf "\e[35;5;161m\tBinary Clean \t[ ✓ ]\n\e[39m"

re:	fclean all

.PHONY:	all clean fclean re
