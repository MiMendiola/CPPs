NAME = phonebook

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = Contact.cpp PhoneBook.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) -c $(CFLAGS) $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
