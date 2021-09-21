#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo
{
	private:
		int real1; 
		int imaginaria1;
		int real2; 
		int imaginaria2;
		int real3; 
		int imaginaria3;
	public:
		Complejo();
		Complejo(int, int, int, int, int, int);
		int getReal1();
		void setReal1(int);
		int getImaginaria1();
		void setImaginaria1(int);
		int getReal2();
		void setReal2(int);
		int getImaginaria2();
		void setImaginaria2(int);
		int getReal3();
		void setReal3(int);
		int getImaginaria3();
		void setImaginaria3(int);
	
};

#endif