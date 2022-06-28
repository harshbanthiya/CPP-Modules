NAME = 		dream_job

SRCS =		tests.cpp Account.cpp
CC =		c++
CPPFLAGS = 	-Wall -Wextra -Werror -std=c++98
OBJS = 		${SRCS:.cpp=.o}
INCS =		-I .


%.o: %.cpp
		@${CC} ${CPPFLAGS} ${INCS} -c $< -o $@

${NAME}: ${OBJS}
		@${CC} ${CPPFLAGS} -o ${NAME} ${INCS} ${OBJS}
		@echo "Type ./dreamjob - to compare output with log.txt"
				
all:	${NAME}

clean:
		@rm -rf ${OBJS}

fclean:	clean
		@rm -rf ${NAME}
	
re:			fclean all

.PHONY:	all clean fclean re