//Creado por stalin franci
// modificado Cesar Alvarez Mosquera
//Fecha:29 -09-2022
#include<iostream>
using namespace std;
int main()
{
	int cmi=0,cml;
	float cmx,cms=0;
	cout<<"ingrese el limite l="; cin>>cml;
	do{
		
	cout<<"ingrese el numero x="; cin>>cmx;
	cmi=cmi+1;
	cms=cms+cmx;



	}while(cmi<cml);
	cout<<"Se ingresaron "<<cml<<" numeros "<< "que sumaron "<<cms<<endl;
	return 0;



}
