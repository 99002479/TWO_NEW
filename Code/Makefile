SRC = main.c\
src/sum.c\

INC = -Iinc

PROJECT_NAME = sum.out
BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

$(BUILD):
mkdir build
