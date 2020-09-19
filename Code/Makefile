SRC = main.c\
src/sum.c\
#test/test_sum.c\
main.c

INC = -Iunity\
-Iinc
#-Itest

PROJECT_NAME = sum.out


#TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
