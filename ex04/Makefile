NAME = file

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

fclean: clean
	$(RM) $(NAME)

re: clean all
