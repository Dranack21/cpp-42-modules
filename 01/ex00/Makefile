### COMPIL #####################################################################

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME 	= megaphone

### SRC ########################################################################

SRCS	=	megaphone.cpp

### OBJS #######################################################################

OBJS	= $(SRCS:.cpp=.o)

### COMMANDS ###################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean
