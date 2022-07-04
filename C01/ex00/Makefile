# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 10:53:06 by hbanthiy          #+#    #+#              #
#    Updated: 2022/07/04 10:53:09 by hbanthiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = 		zombie00

SRCS =		main.cpp newZombie.cpp Zombie.cpp randomChump.cpp 
CC =		c++
CPPFLAGS = 	-Wall -Wextra -Werror -std=c++98
OBJS = 		${SRCS:.cpp=.o}
INCS =		-I .


%.o: %.cpp
		@${CC} ${CPPFLAGS} ${INCS} -c $< -o $@

${NAME}: ${OBJS}
		@${CC} ${CPPFLAGS} -o ${NAME} ${INCS} ${OBJS}
		@echo "Type ./zombie00 - to run the program, tests are in the main file"
				
all:	${NAME}

clean:
		@rm -rf ${OBJS}

fclean:	clean
		@rm -rf ${NAME}
	
re:			fclean all

.PHONY:	all clean fclean re
