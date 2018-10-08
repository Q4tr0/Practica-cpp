//imprimir una tabla de numeros del 1 al 10 con sus cuadrados y cubos
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//string mensaje="\tTABLA DE CUADRADOS";
	int num_tabla=1;
	cout << "\tTABLA DE CUADRADOS Y CUBOS" << endl;
	while(num_tabla<11){
		cout << "- " << num_tabla << " al cuadrado es: " << pow(num_tabla, 2) << " y al cubo es: " << pow(num_tabla, 3)<< endl;
	num_tabla++;
	}
system("pause");
return 0;
}
