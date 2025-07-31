NAME=exec
CXXFLAGS=    -Wall -Werror -Wextra -g #-std=c++98
CXX=c++
#SRC= main.cpp Array.cpp
SRC= .main.cpp Array.cpp
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
   