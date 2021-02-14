#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	//atributos
	private : int nit;
	private : int codigo;
	private : float sueldo;
	private : string puesto;
	
	//constructor
	public : // ya que es instanciada, de acceso publico
	Cliente(){
	}
	
	Cliente (string nom,string ape,string dir,int tel,int n,int cod,float sue,string pue) : Persona(nom,ape,dir,tel){
		nit = n;
		codigo = cod;
		sueldo = sue;
		puesto = pue;
	}
	//Metodos
	//Set Modificar
	void setNit(int n){nit = n;}
	void setCodigo(int cod){codigo = cod;}
	void setSueldo(float sue){sueldo = sue;}
	void setPuesto(string pue){puesto = pue;}
	void setNombres(string nom){nombres = nom;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	//get mostrar
	int getNit(){return nit;}
	int getCodigo(){return codigo;}
	float getSueldo(){return sueldo;}
	string getPuesto(){return puesto;}
	string getNombres(){return nombres;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	//motodos
	void mostrar(){
		cout<<"__________________"<<endl;
		cout<<nit<<","<<codigo<<","<<sueldo<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
	}
};
