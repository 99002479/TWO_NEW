SRC = main.c\
src/pay.c\
test/test_pay.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = pay.out


TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
