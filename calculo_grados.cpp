//ingrese un numero de grados e indique que tipo de angulo es
/*===============================ANALISIS=================================
salida:	angulo... 7 opciones: nulo, agudo, recto, obtuso, llano, oblicuo, completo

proceso:	mientras que numero de grados esté entre 0 y 360...va a ejecutar la funcion de calculo de grados:
				if numero de grados == 0... el angulo es nulo
				else if numero de grados > 0 && <90... el angulo es agudo
				else if numero de grados == 90... el angulo es recto
				else if numero de grados > 90 && <180... el angulo es obtuso
				else if numero de grados == 180... el angulo es llano
				else if numero de grados > 180 && <3600... el angulo es oblicuo
				else if numero de grados == 360... el angulo es completo
				else... usted ingreso un valor invalido
			de lo contrario imprimira mensaje de error
entrada: numero de grados
*/

#include <iostream>

using namespace std;
    
int calculo_angulos(int numero);

int main(){
	int numero;
	bool modificador = true; // se define la variable que dará activacion al bucle while
	cout << "ingrese el numero de grados del angulo entre 0 y 360: ";
	cin >> numero;
	//el bucle toma la variable modificador y verifica que se cumpla la condicion, activando el bucle
	while (modificador == true){
		calculo_angulos(numero); //se instancia o llama a la funcion calculo_angulos tomando como argumento la variable numero que se le ha asignado un valor previamente
		modificador = false; // se modifica la variable de activacion de ciclo para que no se ejecute como un loop infinito
	}

}	
//calculo_angulos recibe como parametro un numero x y verifica si cumple ciertas condiciones presentadas dentro de esta
int calculo_angulos(int numero){
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
system("pause"); // esta funcion permite que no se cierre el programa inmediatamente despues de su ejecuccion
}

