NAME = 		dream_job

SRCS =		tests.cpp \
			Account.cpp
			
CC =		clang++
CPPFLAGS = 	-Wall -Wextra -Werror -std=c++98
OBJS = 		${SRCS:.cpp=.o}
RM =		rm -f
INCS =		-I .


_END=$'\x1b[0m
_BOLD=$'\x1b[1m
_UNDER=$'\x1b[4m
_REV=$'\x1b[7m
_GREY=$'\x1b[30m
_RED=$'\x1b[31m
_GREEN=$'\x1b[32m
_YELLOW=$'\x1b[33m
_BLUE=$'\x1b[34m
_PURPLE=$'\x1b[35m
_CYAN=$'\x1b[36m
_WHITE=$'\x1b[37m



.cpp.o:
				@printf "%-15s ${_YELLOW}${_BOLD}$<${_END}...\n" "Compiling"
				@${CC} ${CFLAGS} ${INCS} -c $< -o $@

${NAME}:	${OBJS}
				@printf "%-15s ${_PURPLE}${_BOLD}${NAME}${_END}...\n" "Compiling"
				@${CC} ${CPPFLAGS} -o ${NAME} ${INCS} ${OBJS}
				@printf "\n${_GREEN}${_BOLD}Compilation done !${_END}\n"
				
all:		${NAME}

clean:
				@printf "%-15s ${_RED}${_BOLD}${NAME} binary files${_END}...\n" "Deleting"
				@${RM} ${OBJS}

fclean:		clean
				@printf "%-15s ${_RED}${_BOLD}${NAME}${_END}...\n" "Deleting"
				@${RM} ${NAME}
	
re:			fclean all

.PHONY:	all clean fclean re