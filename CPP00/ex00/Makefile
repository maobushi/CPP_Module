CXX		= c++ 

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRCS	= megaphone.cpp

NAME	= Megaphone


all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean: 
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) *.o

re: clean all

.PHONY: clean  re all