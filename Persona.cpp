#include <iostream>
using namespace std;
class Persona{
	//atributos o caracteristicas
	protected : string nombres,apellidos,direccion;
				int telefono;
	//constructor es un metodo especial
	protected : 
			Persona(){
					}
			Persona(string nom,string ape,string dir,int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				}
	// metodos
	void mostrar();
};
