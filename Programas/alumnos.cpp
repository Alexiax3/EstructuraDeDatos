#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

 string espaciar(int tamanio, int valor){
	
	int espacio=0;
	string texto="";
	
	espacio=valor-tamanio;
	
	for (int i=0; i<espacio; i++){
		texto=texto+" ";
	}
	return texto;
}

struct Alumno{
	char Nombre[25];
	int edad;
	int calif;
}alum[100];


int main(void){
	
	int n_alumnos, sumae=0, sumag=0;
	float promedio, promgrup;
	
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;
	
	for(int i=0; i<n_alumnos; i++){
		fflush(stdin);
		cout<<"Nombre del alumno "<<i+1<<": ";
		cin.getline(alum[i].Nombre, 25, '\n');
		cout<<"edad del alumno "<<i+1<<": ";
		cin>>alum[i].edad;
		cout<<"Calificacion del alumno "<<i+1<<": ";
		cin>>alum[i].calif;
		
		sumag+=alum[i].calif;
		sumae+=alum[i].edad;
		
		
		cout<<"\n";
	}
	
	promedio=sumae/n_alumnos;
	promgrup=sumag/n_alumnos;
	
	cout<<"|Nombre              |Edad           |Calificacion|"<<endl;
	cout<<"-------------------------------------------------"<<endl;
		for(int i=n_alumnos-1; i>=0; i--){
		cout<<"|"<< alum[i].Nombre<< espaciar(strlen(alum[i].Nombre), 20) <<"|"<< alum[i].edad << espaciar(2,15)<<"|" <<alum[i].calif <<endl;
		
		
		cout<<"\n";
	}
	cout<<"Promedio grupal: "<<promgrup<<endl;
	cout<<"Promedio de edades: "<<promedio<<endl;
	
	getch();
	return 0;	
}
