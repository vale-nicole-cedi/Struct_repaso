#include <iostream>
using namespace std;

/*
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
*/

//codigo:

struct CalifAlumno {
	string nombre;
	int calif_mate, calif_fis;
	float promedio;
};

int main() {
	CalifAlumno alumno1, alumno2, alumno3;

	//alumno 1
	cout << "escribe el nombre del alumno 1"<< endl<<endl;
	cin >> alumno1.nombre;
	cout << "escribe su calificacion de mate: " <<endl<<endl;
	cin >> alumno1.calif_mate;
	cout << "escribe su calificacion de fisica: " <<endl<<  endl;
	cin >> alumno1.calif_fis;

	alumno1.promedio = (alumno2.calif_mate + alumno2.calif_fis) / 2;


	//alumno 2
	cout << "escribe el nombre del alumno 2" << endl << endl;
	cin >> alumno2.nombre;
	cout << "escribe su calificacion de mate: " << endl << endl;
	cin >> alumno2.calif_mate;
	cout << "escribe su calificacion de fisica: " << endl << endl;
	cin >> alumno2.calif_fis;

	alumno2.promedio = (alumno3.calif_mate + alumno3.calif_fis) / 2;


	//alumno 3
	cout << "escribe el nombre del alumno 3" << endl << endl;
	cin >> alumno3.nombre;
	cout << "escribe su calificacion de mate: " << endl << endl;
	cin >> alumno3.calif_mate;
	cout << "escribe su calificacion de fisica: " << endl << endl;
	cin >> alumno3.calif_fis;

	alumno3.promedio = (alumno3.calif_mate + alumno3.calif_fis) / 2;

	//datos:
	cout << "datos de alumnos" << endl;
	cout << "nombre: " << alumno1.nombre << endl;
	cout << "calificacion mate:" << alumno1.calif_mate << endl;
	cout << "calificacion fisica:" << alumno1.calif_fis << endl;
	cout << "promedio:" << alumno1.promedio << endl;

	cout << "datos de alumnos" << endl;
	cout << "nombre: " << alumno2.nombre << endl;
	cout << "calificacion mate:" << alumno2.calif_mate << endl;
	cout << "calificacion fisica:" << alumno2.calif_fis << endl;
	cout << "promedio:" << alumno2.promedio << endl;

	cout << "datos de alumnos" << endl;
	cout << "nombre: " << alumno3.nombre << endl;
	cout << "calificacion mate:" << alumno3.calif_mate << endl;
	cout << "calificacion fisica:" << alumno3.calif_fis << endl;
	cout << "promedio:" << alumno3.promedio << endl;

	return 0;
}