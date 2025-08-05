NAME=exec
CXXFLAGS= -std=c++98#  -Wall -Werror -Wextra -g
CXX=c++
SRC= main.cpp 
OBJ:=$(patsubst %.cpp, %.o, $(SRC))

all: ${NAME}

${NAME} : ${OBJ}
		${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

clean:
		rm -f ${OBJ}
fclean: clean
		rm -f ${NAME}
re: fclean all
.PHONY: all fclean clean re
   