EXECUTABLE := megaphone
SRCS := megaphone.cpp 
OBJS := $(SRCS:.cpp=.cpp.o)
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98
all : $(EXECUTABLE) clean 
	@echo "Usage: ./megaphone || ./megaphone args1 args2 ..."
$(OBJS) : $(SRCS)
	@$(CXX) $(CPP_FLAGS) -c $< -o $@
$(EXECUTABLE): $(OBJS)
	@$(CXX) $(CPP_FLAGS) $(OBJS) -o $(EXECUTABLE)
clean : 
	@rm -rf $(OBJS)
fclean :
	@rm -rf $(EXECUTABLE)
re : fclean all 
.PHONY: all clean fclean re 