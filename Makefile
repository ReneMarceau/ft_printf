# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 13:44:58 by rmarceau          #+#    #+#              #
#    Updated: 2022/11/18 18:26:09 by rmarceau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
LIBFT 	= libft

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

RM = rm -f

AR = ar crs

SRCS_PATH 		= src/

FTPRTF 	= formats printf printf_utils

SRCS = $(addsuffix .c, $(addprefix $(SRCS_PATH)ft_, $(FTPRTF)))
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)/libft.a

re: fclean all

.PHONY: all clean fclean re
