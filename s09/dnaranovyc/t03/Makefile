CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
FUNC = ../src/*.c
OBJS = obj/*.o
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
