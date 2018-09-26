/*write a program that ask the user for a number n and prints the sum of the numbers 1 to n
===================================ANALISIS===================================
salida: suma
proceso: mientras que i < num...
		 suma = suma + i
		 i = i + 1
		 imprima suma
entrada: num
		 constantes usadas: contador = i, suma total = suma
*/
#include <iostream>

using namespace std;

int main(){
	int num, suma = 0, i;
	cout << "\tSUMA DE NUMEROS DE FORMA DESCENDIENTE" << endl;
	cout << "ingrese un numero entero positivo: ";
	cin >> num;
	for(i = 0; i <= num; i++){
		suma += i;
	}
	cout << "la suma de los numeros de forma descendente de " << num << " es: " << suma << endl;
system("pause");
return 0;
}
