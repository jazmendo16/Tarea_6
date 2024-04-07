#include <iostream>
using namespace std;
struct Estudiante{
	int codigo;
	string nombre;
	int nota;
	
	
};
main( ){
	Estudiante estudiante;
	cout<<"ingrese Codigo:";
	cin>>estudiante.codigo;
	cin.ignore();
	cout<<"ingrese Nombre Completo:";
	getline(cin,estudiante.nombre);
	cout<<"ingrese Nota:";
	cin>>estudiante.nota;
	
	
	
	
	
	system("pause");
	
}
