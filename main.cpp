#include <iostream>
#include "Vector.h"
#include "Complejo.h"
#include "Racional.h"
using namespace std;
int menu();
template<class T>
Vector<T> operador();
int main(int argc, char** argv) {
	int op = menu();
//	Racional* t1 = new Racional();
//	Complejo* t2 = new Complejo();
	while(op != 4){
		switch(op){
			case 1:{
				int opcion = 0;
				cout<<"********** Menu **********"<<endl;
				cout<<"* 1. Racionales          *"<<endl;
				cout<<"* 2. Complejos           *"<<endl;
				cout<<"**************************"<<endl;
				cout<<"Elija una opcion: "<<endl;
				cin>> opcion;
				switch(opcion){
					case 1:{
						int num1, denum1;
						int num2, denum2;
						int num3, denum3;
						cout<<"Digite el primer numero: "<<endl;
						cin>>num1;
						cout<<"Digite el segundo numero: "<<endl;
						cin>>denum1;
						cout<<"Digite el primer numero: "<<endl;
						cin>>num2;
						cout<<"Digite el segundo numero: "<<endl;
						cin>>denum2;
						cout<<"Digite el primer numero: "<<endl;
						cin>>num3;
						cout<<"Digite el segundo numero: "<<endl;
						cin>>denum3;
					//	t1 -> agregarDatos(num1, denum1, num2, denum2, num3, denum3);
						
						break;
					}
					case 2:{
						int num1, numi1;
						int num2, numi2;
						int num3, numi3;
						cout<<"Digite el primer numero: "<<endl;
						cin>>num1;
						cout<<"Digite el segundo numero: "<<endl;
						cin>>numi1;
						cout<<"Digite el primer numero: "<<endl;
						cin>>num2;
						cout<<"Digite el segundo numero: "<<endl;
						cin>>numi2;
						cout<<"Digite el primer numero: "<<endl;
						cin>>num3;
						cout<<"Digite el segundo numero: "<<endl;
						cin>>numi3;
						Complejo* c = new Complejo(num1, numi1, num2, numi2, num3, numi3);
					//	lista2 -> aggComplejo(c);
						break;
					}
					default: {
						cout<<"Opcion invalida"<< endl;
					break;
					}
				}
				break;
			}
							
			case 2:{
				int pos;
				cout<<"Numeros racionales: "<<endl;
			//	lista1-> imprimirRacional();
				cout<<"Numeros complejos: "<<endl;
			//	lista2-> imprimirComplejo();
				cout<<"Elija una posicion: "<<endl;
				cin>>pos;
				
				break;
			}
			case 3:{
				cout<<"Numeros racionales: "<<endl;
			//	lista1-> imprimirRacional();
				cout<<"Numeros complejos: "<<endl;
			//	lista2-> imprimirComplejo();
				
				break;
			}
			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
	//lista1->~Vector();
	//lista2->~Vector();
//	delete lista1;
	//delete lista2;
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"********** Menu **********"<<endl;
	cout<<"* 1. Ingresar vector     *"<<endl;
	cout<<"* 2. Listar vectores     *"<<endl;
	cout<<"* 3. Operear vectores    *"<<endl;
	cout<<"* 4. Salir               *"<<endl;
	cout<<"**************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}