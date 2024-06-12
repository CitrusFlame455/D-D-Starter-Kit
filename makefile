output: character.o rogue.o wizard.o warrior.o main.o
	c++ character.o rogue.o wizard.o warrior.o main.o -o output

main.o: main.cpp
	c++ -c main.cpp

character.o: character.cpp character.h
	c++ -c character.cpp

rogue.o: rogue.cpp rogue.h
	c++ -c rogue.cpp

wizard.o: wizard.cpp wizard.h
	c++ -c wizard.cpp
	
warrior.o: warrior.cpp warrior.h
	c++ -c warrior.cpp

clean:
	rm *.o


