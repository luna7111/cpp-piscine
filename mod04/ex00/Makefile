#
# Name: Luna del Valle
# File: Makefile
# Created on: Sunday Aug 03, 2025 11:14:54 CEST
#

########################

NAME		:=	bin

SRC			:=	src/main.cpp\
				src/Animal.cpp\
				src/Dog.cpp\
				src/Cat.cpp\
				src/WrongAnimal.cpp\
				src/WrongCat.cpp

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

