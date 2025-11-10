#
# Name: Luna del Valle
# File: Makefile
# Created on: jueves nov 06, 2025 20:41:50 CET
#

########################

NAME		:=	RPN

SRC			:=	src/main.cpp\
				src/RPN.cpp

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

