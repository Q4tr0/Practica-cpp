//elabore un programa que reciba 3 numeros y los muestre en orden ascendente
/*==============================ANALISIS============================
salida: 3 numeros en siguiente orden
		numero mayor
		numero medio
		numero menor

proceso: num 1 > num 2 && num 1 > num 3... el numero mayor es num1
		num 2 > num3... el numero medio es num2 y el numero menor es num3

entrada: num1, num2, num3
*/

#include <iostream>

using namespace std;

int num1, num2, num3, num_mayor, num_medio, num_menor, aux;
int calculo(int a, int b, int c);


int main(){
	cout << "ingrese numeros enteros positivos diferentes!" << endl;
	cout << "ingrese el primer numero: ";
	cin >> num1;
	cout << "ingrese el segundo numero: ";
	cin >> num2;
	cout << "ingrese el tercer numero: ";
	cin >> num3;
	calculo(num1, num2, num3);
		
	cout << "el numero mayor es: " << num_mayor << "\nel numero medio es: " << num_medio << "\nel numero menor es: " << num_menor << endl;
	
system("pause");
return 0;
}

int calculo(int a, int b, int c){
	if(num1>num2 && num1>num3){
		num_mayor=num1;
		if(num2>num3){
			num_medio=num2;
			num_menor=num3;
		}
		else
			aux=num2;
			num2=num3;
			num3=aux;
	}
	else if(num2>num1 && num2>num3){
		num_mayor=num2;
		if(num1>num3){
			num_medio=num1;
			num_menor=num3;
		}
		else
			aux=num1;
			num1=num3;
			num3=aux;
	}
	else if(num3>num1 && num3>num2){
		num_mayor=num3;
		if(num2>num1){
			num_medio=num2;
			num_menor=num1;
		}
		else
			aux=num2;
			num2=num1;
			num1=aux;
	}
	else
		cout << "usted ha ingresado valores invalidos!" << endl;
}








