#
# Name: Luna del Valle
# File: Makefile
# Created on: jueves sep 18, 2025 18:13:16 CEST
#

########################

NAME		:=	bin

SRC			:=	src/Bureaucrat.cpp\
				src/AForm.cpp\
				src/ShrubberyCreationForm.cpp\
				src/RobotomyRequestForm.cpp\
				src/PresidentialPardonForm.cpp\
				src/Intern.cpp\
				src/main.cpp

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
	rm -rf obj file_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

