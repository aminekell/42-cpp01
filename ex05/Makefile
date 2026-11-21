NAME = Weapon
SRC = main.cpp Harl.cpp
HEDER = Harl.hpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGE = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGE) $(OBJ)  -o $(NAME)

%.o : %.cpp $(HEDER)
	$(CC) $(CFLAGE) -c $< -o $@ 

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all