# Name of the project
PROJECT_NAME = Minesweeper

# Output directory
BUILD = build

# All source code files
SRC = Minesweeper_main.c\
Src/Minesweeper_operations.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out
INC	= -Iinc

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out
