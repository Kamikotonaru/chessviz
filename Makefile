PP = g++
CFLAGS = -c -Wall -Werror

all: bin\chess

bin\chess: build\main.o build\board.o build\board_print_plain.o
	$(PP) -Wall -Werror build\main.o build\board.o build\board_print_plain.o -o $@
	
build\main.o: src\main.cpp
	$(PP) $(CFLAGS) src\main.cpp -o $@

build\board.o: src\board.cpp
	$(PP) $(CFLAGS) src\board.cpp -o $@

build\board_print_plain.o: src\board_print_plain.cpp
	$(PP) $(CFLAGS) src\board_print_plain.cpp -o $@
	
.PHONY:clean

clean:
	rm -rf build\*.o bin\chess.exe
