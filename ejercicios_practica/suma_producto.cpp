/*esciba un programa que pregunte al usuario un numero y permita elegir al usuario si se quiere sumar o multiplicar esos numeros del 1 hasta el numero ingresado*/
/*=========================ANALISIS==========================
salida: entero: dos opciones:
				1-suma de numeros
				2-producto de numeros
proceso: pedir al usuario un numero = num
		 pedir al usuario que tipo de operacion quiere realizar = tipo_op
		 	1-suma
		 	2-producto
		mientras que tipo_op == 1 o tipo_op == 2
			si tipo_op == 1...
				para (i=0; i<=num; i++)
				imprimia resultado += i
			sino si tipo_op == 2...
				para (i=0; i<=num; i++)
				imprimia resultado *= i
		mostrar: ha ingresado un valor invalido.
entrada: 2 enteros: num
					posible operacion (1 o 2)
*/
#include <iostream>

using namespace std;

int suma(int a, int b, int c);
int producto(int a, int b, int c);

int main(){
	int num, tipo_op, i, rsuma=0, rproducto=1;
	bool activador=true;
	while(activador=true){
		cout << "ignrese el numero a operar que sea entero: ";
		cin >> num;
		cout << "(1) para adicion, (2) para producto y (0) para salir..." << endl;
		cout << "ingrese el tipo de operacion que desea efectuar: ";
		cin >> tipo_op;
		if(num <0 || tipo_op<0){
			cout << "ingreso un valor invalido!" << endl;
		}
		else if(tipo_op==0){
			break;
		}
		else{
			switch(tipo_op){
				case 1:
					suma(i, num, rsuma);
					break;
				case 2:
					producto(i, num, rproducto);
					break;
				default:
					cout << "ha ingresado un valor invalido!" << endl;
					break;
			}
		}	
	system("pause");
	system("cls");
	}
system("pause");
return 0;
}
int suma(int a, int b, int c){
	for(a=0; a<=b; a++){
		c += a;
	}
	cout << "el resultado es: " << c << endl;
}
int producto(int a, int b, int c){
	for(a=1; a<=b; a++){
		c *= a;
	}
	cout << "el resultado es: " << c << endl;
}
