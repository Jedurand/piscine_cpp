NAME	=	a.out

SRCS	=	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

LIBS	=

CC	=	clang++

OBJS	=	$(SRCS:.cpp)

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

all	:
		make wall

NAME	:

c	:
		$(CC) -o $(NAME) $(SRCS)

wall	:
		$(CC) -o $(NAME) -std=c++98 $(FLAGS) $(SRCS)

clean	:

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY: all clean fclean re
