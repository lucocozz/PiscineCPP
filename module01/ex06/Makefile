NAME := karenFilter
SRC := 	main.cpp	\
		Karen.cpp

MAKE = make
MAKEFLAGS += --ignore-errors
CXX := clang++
CXXFLAGS := -Wall -Wextra -Werror -Wpedantic -Wvla -std=c++98 -MMD -MP
BUILD_DIR := .build
INCLUDES_DIR := includes
SOURCE_DIR := sources
DEP := $(SRC:%.cpp=$(BUILD_DIR)/%.d)
OBJ := $(DEP:.d=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

vpath %.cpp $(SOURCE_DIR)

all: $(NAME)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	./$< WARNING
	@echo
	./$< INFO
	@echo
	./$< DEBUG
	@echo
	./$< ERROR
	@echo
	./$< yolo
	@echo
	./$<
	@echo
	./$< 1 2

$(BUILD_DIR):
	mkdir $@

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES_DIR:%=-I %) -c $< -o $@

-include $(DEP)

.PHONY: all clean fclean re test