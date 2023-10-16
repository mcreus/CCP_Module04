NAME	=	Animal

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	=	$(SRCS:.cpp=.o)

%.o:%.cpp
		c++ -Wall -Wextra -Werror -std=c++98 -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33m\nCOMPILATION Animal\n"
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[1;32m\nCOMPILATION REUSSIE\n"


clean:
		@echo "\033[0;31m\nDELETING OBJS\n"
		rm -rf $(OBJS)
		@echo "\033[1;32m\nDONE\n"

fclean: clean
		@echo "\033[0;31m\nDELETING Animal\n"
		rm -rf $(NAME)
		@echo "\033[1;32m\nDONE\n"

re: fclean all