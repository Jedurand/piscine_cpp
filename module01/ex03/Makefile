NAME	=	ex01

SRCS	=	ex01.cpp

LIBS	=	-lstdc++

CC	=	gcc

OBJS	=	$(SRCS:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror

all	:	fclean
		$(NAME)
		$(CC) $(LIBS) -o $(NAME) $(FLAGS) $(SRCS)

c	:
		$(CC) $(LIBS) -o $(NAME) $(SRCS)	

clean	:
		echo "Cleaning"
#		test -f $(OBJS) && rm $(OBJS)	
#		if [- f "$(OBJS)"]; then rm $(OBJS) fi

fclean	:	clean
		rm $(NAME)

re	:	fclean all

.PHONY: all clean fclean re
