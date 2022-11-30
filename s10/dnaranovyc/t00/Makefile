NAME = read_file
SRC_D = src
INC_D = inc
SRC_F = src/*.c
INC_H = inc/header.h
CFLAGS = clang -std=c11 -Wall -Wextra -Werror -Wpedantic
RM = rm -rf
all: $(NAME) clean

$(NAME):
	@$(CFLAGS) $(SRC_F) -o $@ -I $(INC_D)

clean:
	@$(RM) $(NAME)

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all
