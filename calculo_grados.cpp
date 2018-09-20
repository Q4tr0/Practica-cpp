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
	//se define la variable que dará activacion al bucle while
	bool modificador1 = true; 
	//se define la variable que dará activacion al bucle while que esta anidado dentro del primer bucle
	bool modificador2 = true; 
	
	//el bucle toma la variable modificador y verifica que se cumpla la condicion, activando el bucle
	while (modificador1 == true){
		cout << "CALCULO DE ANGULO SEGUN GRADOS" << endl;
		cout << "ingrese una cantidad de grados entre 0 y 360: ";
		cin >> numero;
		//esta funcion (system) permite importar funciones de la consola y se usara la funcion "cls" que permite limpiar la pantalla de la consola
		system("cls");
		while(modificador2==true && numero => 0 && numero <= 360 ){
			//se instancia o llama a la funcion calculo_angulos tomando como argumento la variable numero que se le ha asignado un valor previamente
			calculo_angulos(numero); 
			/*se modifica el valor de la variable de activacion del primer bucle (maodificador1) para que no se ejecute infinitamente, se modifica aqui porque requiero que el 
			programa me siga pdidiendo datos hasta que estos sean validos*/
			modificador1 = false;
			//aqui se modifica la variable de activacion del segundo bucle while (modificador2) para que no se ejecute infinitamente
			modificador2 =false;  
		}
	}
//esta funcion permite que no se cierre el programa inmediatamente despues de su ejecuccion
system("pause");
}	
//calculo_angulos recibe como parametro un numero x y verifica si cumple ciertas condiciones presentadas dentro de esta
int calculo_angulos(int numero){
	if (numero==0){
		cout << numero << " grados equivale a un angulo nulo." << endl;
	}
	else if (numero>0 && numero <90){
		cout << numero << " grados equivale a un angulo agudo." << endl;
	}
	else if (numero==90){
		cout << numero << " grados equivale a un angulo recto." << endl;
	}
	else if (numero>90 && numero <180){
		cout << numero << " grados equivale a un angulo obtuso." << endl;
	}
	else if (numero==180){
		cout << numero << " grados equivale a un angulo llano." << endl;
	}
	else if (numero>180 && numero <360){
		cout << numero << " grados equivale a un angulo oblicuo." << endl;
	}
	else if (numero==360){
		cout << numero << " grados equivale a un angulo completo o angulo perigonal." << endl;
	}
}

