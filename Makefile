br : clean copilar ejecutar

copilar: src/main.cpp
	g++ src/main.cpp -o bin/mascotas -I include

ejecutar: bin/mascotas
	./bin/mascotas

clean: bin/mascotas
	rm bin/*


