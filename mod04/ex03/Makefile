#
# Name: Luna del Valle
# File: Makefile
# Created on: Saturday Aug 09, 2025 19:10:01 CEST
#

########################

NAME		:=	bin

SRC			:=	main.cpp\
				AMateria.cpp\
				Ice.cpp\
				Cure.cpp\
				ICharacter.cpp\
				Character.cpp\
				IMateriaSource.cpp\
				MateriaSource.cpp

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

