#include <iostream>
using namespace std;

int main() {

	//definir la estructura
	struct Alumno {
		int num_lista;
		float calif;
		string nombre;
	};

	//declarar un "Alumno"
	Alumno alumno1, alumno2;

	//asignar un valor a la variable
	alumno1.calif = 9.5;

	return 0;
}