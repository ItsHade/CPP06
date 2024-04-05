SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = ${SRC:.cpp=.o}

NAME = Identify

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) -r $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
