
output: main.o func.o game.o
	g++ -lncurses main.o func.o game.o -o output

main.o: main.cpp header.h
	g++ -c main.cpp

func.o: func.cpp header.h
	g++ -c  func.cpp

game.o: game.cpp header.h
	g++ -c game.cpp

clean:
	rm *.o output
