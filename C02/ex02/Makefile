# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 15:46:01 by hbanthiy          #+#    #+#              #
#    Updated: 2022/07/11 14:51:25 by hbanthiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98
NAME :=	ex02
SRCS :=	main.cpp Fixed.cpp 
OBJS_DIR := object_files
OBJS := $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

$(OBJS_DIR)/%.o: %.cpp
		@mkdir -p $(OBJS_DIR)
		@$(CC) $(CPPFLAGS) -o $@ -c $^

$(NAME): $(OBJS)
		@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
		
all: $(NAME)
		@echo "Type ./ex02 - to run the program, tests are in the main file"

clean:
		rm -rf $(OBJS_DIR) $(OBJS)

fclean:	clean
		rm -rf $(NAME)
	
re:			fclean all

.PHONY:	all clean fclean re
