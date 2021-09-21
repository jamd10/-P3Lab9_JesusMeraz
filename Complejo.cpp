#include "Complejo.h"
Complejo::Complejo(int real1, int imaginaria1, int real2, int imaginaria2,int real3, int imaginaria3){
	this-> real1 =real1;
	this-> imaginaria1 = imaginaria1;
	this-> real2 = real2;
	this-> imaginaria2 = imaginaria2;
	this-> real3 = real3;
	this-> imaginaria3 = imaginaria3;
	
}

int Complejo::getReal1(){
	return 	this-> real1;
}
void Complejo::setReal1(int real1){
	this-> real1 = real1;
}
int Complejo::getImaginaria1(){
	return 	this-> imaginaria1;
}
void Complejo::setImaginaria1(int imaginaria1){
	this-> imaginaria1 = imaginaria1;
}
// 2
int Complejo::getReal2(){
	return 	this-> real2;
}
void Complejo::setReal2(int real2){
	this-> real2 = real2;
}
int Complejo::getImaginaria2(){
	return 	this-> imaginaria2;
}
void Complejo::setImaginaria2(int imaginaria2){
	this-> imaginaria2 = imaginaria2;
}
// 3
int Complejo::getReal3(){
	return 	this-> real3;
}
void Complejo::setReal3(int real3){
	this-> real3 = real3;
}
int Complejo::getImaginaria3(){
	return 	this-> imaginaria3;
}
void Complejo::setImaginaria3(int imaginaria3){
	this-> imaginaria3 = imaginaria3;
}