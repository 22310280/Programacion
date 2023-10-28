bin/Galaga : src/Galaga.cpp include/*
	c++ src/Galaga.cpp -o bin/Galaga -lcurses -I include
	
run: bin/Galaga
	./bin/Galaga