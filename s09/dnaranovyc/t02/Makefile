CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
FUNC = ../src/mx_atoi.c ../src/mx_isdigit.c ../src/mx_isspace.c ../src/mx_printchar.c ../src/mx_printint.c ../src/mx_printstr.c ../src/mx_strcmp.c ../src/mx_strcpy.c ../src/mx_strlen.c
OBJS = obj/mx_atoi.o obj/mx_isdigit.o obj/mx_isspace.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_strcmp.o obj/mx_strcpy.o obj/mx_strlen.o
OBJS_REP = obj
CREATION = minilibmx.a

all: clean MINILIBMX
MINILIBMX:
	mkdir $(OBJS_REP)
	cd $(OBJS_REP) && $(CC) $(CFLAGS) -c $(FUNC)
	ar rcs $(CREATION) $(OBJS)
uninstall: clean
clean: 
	rm -rf $(CREATION) $(OBJS_REP)
reinstall: all
