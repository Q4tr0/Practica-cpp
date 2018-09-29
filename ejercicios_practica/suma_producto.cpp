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

int main(){
	int num, tipo_op, i, rsuma=0, rproducto=1;
	bool activador=true;
	cout << "ignrese el numero a operar que sea entero: ";
	cin >> num;
	while(activador=true){
		cout << "que operacion desea realizar?...\ningrese 1 para suma y 2 para producto: ";
		cin >> tipo_op;
		switch(tipo_op){
			case 1: 
				for(i=0; i<=num; i++){
					rsuma += i;
				}
				cout << "la suma de los numeros del 1 hasta el " << num << " es: " << rsuma << endl;
				break;
			case 2:
				for(i=1; i<=num; i++){
					rproducto *= i;
				}
				cout << "el producto de los numeros del 1 hasta el " << num << " es: " << rproducto << endl ;
				break;
			default:
				cout << "ha ingresado un valor invalido!" << endl;
				break;
		}		
	break;
	}
system("pause");
return 0;
}
