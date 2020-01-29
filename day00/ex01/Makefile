NAME = phonebook

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

TARGET = phonebook.cpp

all: $(NAME)

$(NAME): $(TARGET)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(TARGET)

clean:
	@rm -f $(NAME)

.phony: all clean