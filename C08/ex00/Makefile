# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 13:43:17 by hbanthiy          #+#    #+#              #
#    Updated: 2022/07/28 15:01:36 by hbanthiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98
NAME :=	ex00
SRCS :=	main.cpp
OBJS_DIR := object_files
OBJS := $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)
		@echo "Type ./ex00 - to run the program, tests are in the main file"

$(OBJS_DIR)/%.o: %.cpp
		@mkdir -p $(OBJS_DIR)
		@$(CC) $(CPPFLAGS) -o $@ -c $^

$(NAME): $(OBJS)
		@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
		
clean:
		rm -rf $(OBJS_DIR) $(OBJS)

fclean:	clean
		rm -rf $(NAME)
	
re:			fclean all

.PHONY:	all clean fclean re
