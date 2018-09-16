#include <iostream>

using namespace std;

int main()
{
	string nombre;
	int edad;
	cout << "ingresa tu nombre: ";
	cin >> nombre;
	cout << "ingresa tu edad: ";
	cin >> edad;
	if (edad>0 && edad<18)
		cout << "hola " << nombre << ", eres menor de edad." << endl;
	else if (edad>=18)
		cout << "hola " << nombre << ", eres mayor de edad." << endl;
	else
		cout << "has ingresado un valor invalido!" << endl;
	
system("pause");
return 0;
}
