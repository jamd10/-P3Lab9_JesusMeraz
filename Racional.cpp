#include "Racional.h"
Racional::Racional(){	
	this-> numerador1 = new Vector<int>();
	this-> denominador1 = new Vector<int>();
	this-> numerador2 = new Vector<int>();
	this-> denominador2 = new Vector<int>();
	this-> numerador3 = new Vector<int>();
	this-> denominador3 = new Vector<int>();
	
}

void Racional::agregarDatos(int numerador1, int denominador1, int numerador2, int denominador2,int numerador3, int denominador3){
	this-> numerador1 -> AgregarRacional(numerador1);
	this-> denominador1 -> AgregarRacional(denominador1);
	this-> numerador2 -> AgregarRacional(numerador2);
	this-> denominador2 -> AgregarRacional(denominador2);
	this-> numerador3 -> AgregarRacional(numerador3);
	this-> denominador3 -> AgregarRacional(denominador3);
}

int Racional::getNumerador1() {
	return this->numerador1->r();
}
int Racional::getDenominador1(){
	return this->denominador1->r();
}
int Racional::getNumerador2() {
	return this->numerador2->r();
}
int Racional::getDenominador2(){
	return this->denominador2->r();
}
int Racional::getNumerador3() {
	return this->numerador3->r();
}
int Racional::getDenominador3(){
	return this->denominador3->r();
}