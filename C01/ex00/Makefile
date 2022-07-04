# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:30:58 by hbanthiy          #+#    #+#              #
#    Updated: 2022/07/04 10:43:52 by hbanthiy         ###   ########.fr        #
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
