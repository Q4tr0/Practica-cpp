/*ingrese un numero de grados e indique a que tipo de angulo es equivalente*/
/*================================ANALISIS====================================
salida: angulo... 7 opciones: nulo, agudo, recto, llano, obtuso, oblicuo, completo

proceso: while numero de grados > 0 
			if numero de grados == 0... el angulo es nulo
			else if numero de grados > 0 && < 90... el angulo es agudo
			else if numero de grados == 90... el angulo es recto
			else if numero de grados > 90 && < 180... el angulo es obtuso
			else if numero de grados == 180... el angulo es llano
			else if numero de grados > 180 && < 360... el angulo es oblicuo
			else if numero de grados == 360... el angulo es completo
			else usted ingreso un numero invalido!
entrada: numero de grados
*/

#include <iostream>

using namespace std;
    
int calculo_angulos(int numero);

int main(){
	int numero;
	cout << "ingrese el numero de grados del angulo entre 0 y 360: ";
	cin >> numero;
	calculo_angulos(numero); // se llama la funcion y se le asigna como parametro la variable asignada al numero que proporciona el usuario
return 0;
}	
//calculo_angulos recibe como parametro un numero x y verifica si cumple ciertas condiciones presentadas dentro de esta
int calculo_angulos(int numero){
	while(numero >=0){
		if (numero==0){
			cout << "el angulo es nulo." << endl;
		}
		else if (numero>0 && numero <90){
			cout << "el angulo es agudo." << endl;
		}
		else if (numero==90){
			cout << "el angulo es recto." << endl;
		}
		else if (numero>90 && numero <180){
			cout << "el angulo es obtuso." << endl;
		}
		else if (numero==180){
			cout << "el angulo es llano." << endl;
		}
		else if (numero>180 && numero <360){
			cout << "el angulo es oblicuo." << endl;
		}
		else if (numero==360){
			cout << "el angulo es completo o angulo perigonal." << endl;
		}
		else{
			cout << "usted ha ingresado un valor invalido! " << endl;
		}
	break; //se usa break para interrumpir la ejecucion del ciclo y no imprima infinitamente la instruccion de la condicion
	}
	//se usa esa condicion para imprimir un mensaje de error si el numero ingresado es negativo
	if (numero<0){
		cout << "usted ha ingresado un valor invalido!" << endl;
	}
}
