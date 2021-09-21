#ifndef VECTOR_H
#define VECTOR_H
#include <vector>
using namespace std;
#include <iostream>
using std::vector;
template <class T> 

class Vector
{
	private:
		vector <T> racional;
		vector <T> complejo;
	public:
		Vector <T> ();
		T r();
		T c();
		void AgregarRacional(T);
		void AgregarComplejo(T);
		Vector<T>* sumar(Vector<T>*);
		Vector<T>* multiplicar(vector<T>*);
		T getRacional(int);
		void setComplejo(int,T);
		T getComplejo(int);
		void imprimirRacional();
		void imprimirComplejo();
	
	
};

#endif
