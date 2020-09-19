SRC = main.c\
src/pay.c\
test/test_pay.c\
main.c

# Output directory
BUILD = build

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = pay.out

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)
	
run:$(PROJECT_NAME)
	./${PROJECT_NAME}
