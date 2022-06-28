EXECUTABLE := megaphone
SRCS := megaphone.cpp 
OBJS := $(SRCS:.cpp=.o)
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98
all : $(EXECUTABLE) 
	@echo "Usage: ./megaphone || ./megaphone args1 args2 ..."
$(OBJS) : $(SRCS)
	@c++ $(CPP_FLAGS) -c $< -o $@
$(EXECUTABLE): $(OBJS)
	@c++ $(CPP_FLAGS) $(OBJS) -o $(EXECUTABLE)
clean : 
	@rm -rf $(OBJS)
fclean : clean 
	@rm -rf $(EXECUTABLE)
re : fclean all 
.PHONY: all clean fclean re 