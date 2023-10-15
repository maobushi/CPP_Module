CC		= c++ 

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRCS	= src/main.cpp \
			src/Phonebook.cpp \
			src/Contact.cpp

NAME	= Phonebook


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean: 
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME) *.o

re: clean all

.PHONY: clean  re all