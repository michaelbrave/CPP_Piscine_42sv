NAME = megaphone

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

TARGET = megaphone.cpp

all: $(NAME)

$(NAME): $(TARGET)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(TARGET)

clean:
	@rm -f $(NAME)

.phony: all clean