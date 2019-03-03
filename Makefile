all:
	g++ -o stdout -Wall -Werror stdout.cpp
	
test:
	./stdout
	
clean:
	rm stdout.exe stdout