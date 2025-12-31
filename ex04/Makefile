NAME = file

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: clean all
