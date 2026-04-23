NAME	= megaphone
CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRC	= megaphone.cpp
OBJ	= $(SRC:.cpp=.o)
RM	= rm -f

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJ)
	
fclean:	clean
	$(RM) $(NAME)
