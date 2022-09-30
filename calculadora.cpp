//Programa que presenta las operaciones básicas
//Creado por stalin franci
// modificado Cesar Alvarez Mosquera 
//Fecha:29 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float cmx,cmy,cms,cmm,cmd,cmr;
	//Ingreso de datos
	cout<<"Ingrese en valor de cmx=:";
	cin>>cmx;
	cout<<"Ingrese en valor de cmy=:";
	//Operaciones 
	cin>>cmy;
	cms=cmx+cmy;
	cmm=cmx*cmy;
	cmd=cmx/cmy;
	cmr=cmx-cmy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<cmx<<" + "<<cmy<<" = "<<cms<<endl;
	cout<<"Las multiplicacion de "<<cmx<<" * "<<cmy<<" = "<<cmm<<endl;
	cout<<"Las division de "<<cmx<<" / "<<cmy<<" = "<<cmd<<endl;
	cout<<"Las resta de "<<cmx<<" - "<<cmy<<" = "<<cmr<<endl;
	return 0 ;

}
