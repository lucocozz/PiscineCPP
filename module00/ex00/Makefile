NAME := megaphone
SRC := megaphone.cpp
CXX := clang++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
BUILD_DIR := .build
DEP := $(SRC:%.cpp=$(BUILD_DIR)/%.d)
OBJ := $(DEP:.d=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$< "shhhhh... I think the students are asleep..."
	./$< Damnit " ! " "Sorry students, I thought this thing was off."
	./$<

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@



.PHONY: all clean fclean re test