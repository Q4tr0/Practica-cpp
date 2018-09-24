#include <iostream>

using namespace std;

int main(){
	string nombre1 = "alice";
	string nombre2 = "bob";
	string nombre_user;
	cout << "ingrese su nombre: ";
	cin >> nombre_user;
	if (nombre_user == nombre1 || nombre_user == nombre2){
		cout << "hola " << nombre_user <<endl;
	}
	else
	cout << "sin saludo." << endl;
}
