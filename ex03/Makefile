





NAME = DiamondTrap

CPP = c++ -Wall -Wextra -Werror -Wshadow   -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CPP} ${OBJ} -o $@

%.o:%.cpp ClapTrap.h ScavTrap.h FragTrap.h DiamondTrap.h
	${CPP}  -c $< -o $@

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

