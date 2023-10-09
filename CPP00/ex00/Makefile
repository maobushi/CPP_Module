CC		= c++ 

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRCS	= megaphone.cpp

NAME	= Megaphone


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean: 
	$(RM) $(NAME)

re: clean all

.PHONY: clean  re all