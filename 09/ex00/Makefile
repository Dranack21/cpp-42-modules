### COMPIL #####################################################################

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98 -fsanitize=leak,address,undefined
NAME    = btc

### SRC ########################################################################

SRCS    = main.cpp \
		BitcoinExchange.cpp \
			
			
### OBJS ###########################################################################

OBJDIR  = trash
SRCDIR  = srcs
OBJS    = $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

### COMMANDS #######################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean