### COMPIL #####################################################################

CC      = g++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
NAME    =  Sed_is_for_losers

### SRC ########################################################################

SRCS    = main.cpp \

### OBJS ###########################################################################

OBJDIR  = obj
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
