#include <iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
	
	
};
main(){
	Estudiante estudiante;
	int fila=0, columna=0;
	cout<<"Cuantos Estudiantes desea Agregar;";
	cin>>fila;
	
	cout<<"cuantas notas por estudiante desea ingresar:";
	cin>>columna; 
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];	
	estudiante.notas = new int *[fila];
	for(int i=0;i<fila;i++){
		estudiante.notas[i]=new int[columna];
	}
	
	cout<<"_________________ingrese notas_______";
	for (int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre completo["<<i>>"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"ingrese Nota["<<ii<<"] :";
			cin>>*(*(estudiante.notas+i)+ii);
			
		}	
		cout<<"______________"<<endl;
			
	}
	}	system("pause");
}
