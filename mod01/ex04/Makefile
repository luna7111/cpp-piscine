#                                          _.._  .           .
#  Makefile                              .' .-'`        *
#                                       /  /       +        *
#  by: luna del Valle                   |  |           *
#                                       \  '.___.;       +
#  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
#                                           ``

########################

NAME		:=	Sed\ is\ for\ losers

SRC			:=	src/main.cpp

OBJ			:=	$(SRC:%.cpp=obj/%.o)

CXX			:=	c++

CXXFLAGS	:=	-Wall -Wextra -Werror -Iinclude -std=c++98

########################

all: $(NAME)

$(NAME): obj $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

obj:
	mkdir obj
	mkdir obj/src

obj/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
