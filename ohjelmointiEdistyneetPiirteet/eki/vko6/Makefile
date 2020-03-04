output: main.o input.o
    g++ main.o input.o -o output

main.o: main.cpp func.h
    g++ -c main.cpp

input.o: input.cpp header.h
    g++ -c  input.cpp

clean:
    rm *.o output