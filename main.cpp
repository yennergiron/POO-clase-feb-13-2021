//main
#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nombres,apellidos,direccion,puesto;
	int nit;
	int telefono;
	int codigo;
	float sueldo;
	
	cout<<"Ingrese NIT: ";
	cin>>nit;
	cout<<"Ingrese Codigo: ";
	cin>>codigo;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	//instanciar la clase, intancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit,codigo,sueldo,puesto);
	obj.mostrar();
	
	cout<<"Modifique NIT: ";
	cin>>nit;
	obj.setNit(nit);
	cout<<"Modifique Codigo: ";
	cin>>codigo;
	obj.setCodigo(codigo);
	cout<<"Modifique Sueldo: ";
	cin>>sueldo;
	obj.setSueldo(sueldo);
	cout<<"Modifique Puesto: ";
	cin>>puesto;
	obj.setPuesto(puesto);
	obj.mostrar();
}
