NAME	= megaphone
CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
DFLAGS	= -MMD -MP
RM	= rm -f

SRC	= megaphone.cpp
OBJ	= $(SRC:.cpp=.o)
DEP	= $(SRC:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(DFLAGS) -c $< -o $@
	
-include $(DEP)
	
clean:
	$(RM) $(OBJ) $(DEP)
	
fclean:	clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
