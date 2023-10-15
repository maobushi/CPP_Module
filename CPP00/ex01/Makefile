CXX		= c++ 

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRCS	= src/main.cpp \
			src/Phonebook.cpp \
			src/Contact.cpp

NAME	= Phonebook

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean: 
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) *.o

re: fclean all

.PHONY: clean fclean re all
