NAME = moarbrainz

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

TARGET = main.cpp Zombie.cpp ZombieHorde.cpp

all: $(NAME)

$(NAME): $(TARGET)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(TARGET)

clean:
	@rm -f $(NAME)

.phony: all clean