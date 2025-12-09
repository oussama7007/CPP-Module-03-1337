

NAME = ClapTrap

CPP = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CPP} ${OBJ} -o $@

%.o:%.cpp ClapTrap.h
	${CPP}  -c $< -o $@

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

