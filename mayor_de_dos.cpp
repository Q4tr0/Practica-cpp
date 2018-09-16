#include <iostream>

using namespace std;

int main()
{
	int num1;
	int num2;
	cout << "ingresa un numero: ";
	cin >> num1;
	cout << "ingresa otro numero: ";
	cin >> num2;
	if(num1<0 && num2<0)
		cout << "ingrese valores validos!" << endl;
	else if (num1==num2)
		cout << num1 << " es igual a " << num2 << endl;
	else if (num1>num2)
		cout << num1 << " es mayor a " << num2 << endl;
	else 
		cout << num2 << " es mayor a " << num1 << endl;

system("pause");
return 0;
}


