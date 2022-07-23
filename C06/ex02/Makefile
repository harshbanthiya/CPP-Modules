# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/15 13:43:17 by hbanthiy          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2022/07/23 16:52:12 by sheeed           ###   ########.fr        #
=======
#    Updated: 2022/07/22 15:28:02 by hbanthiy         ###   ########.fr        #
>>>>>>> 191dacdfd2e9f05c362cb4fbe76d8e86b446c6d2
#                                                                              #
# **************************************************************************** #

CC := clang++
CPPFLAGS := -Wall -Werror -Wextra -std=c++98
NAME :=	ex02
SRCS :=	main.cpp Base.cpp
OBJS_DIR := object_files
OBJS := $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))

all: $(NAME)
		@echo "Type ./ex02 - to run the program, tests are in the main file"

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
