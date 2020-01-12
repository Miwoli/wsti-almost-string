compiler=g++
VPATH=src:o_files

__: main
main : main.o new_string.o
	$(compiler) o_files/main.o ./o_files/new_string.o -o new_string.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

new_string.o : new_string.cpp
	$(compiler) -c ./src/new_string.cpp -o ./o_files/new_string.o