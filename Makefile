CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
SRC = *.c
OBJ = $(SRC:.c=.o)
NAME = tree

all: $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
