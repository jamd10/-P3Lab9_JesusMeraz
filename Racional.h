#ifndef RACIONAL_H
#define RACIONAL_H
#include "Vector.cpp"
#include <iostream>
using namespace std;
class Racional
{
	private:
		Vector<int>* numerador1;
		Vector<int>* denominador1;
		Vector<int>* numerador2;
		Vector<int>* denominador2;
		Vector<int>* numerador3;
		Vector<int>* denominador3;
	public:
		Racional();
		~Racional();
		void agregarDatos(int, int, int, int, int, int);
		int getNumerador1();
		int getDenominador1();
		int getNumerador2();
		int getDenominador2();
		int getNumerador3();
		int getDenominador3();
};
  #endif