//elabore un algoritmo que imprima las tablas de multiplicar del 1 hasta el 12
/*
salida: tablas de multiplicar desde la 1 hasta la 12 en orden ascendiente
proceso: activador inicie en 0
		 multiplicando sea igual a 1
		 mientras que activador < 13 
			 esta es la tabla de multiplicar x 
			 para i=1 i<11 i++
			 imprime en cada repeticion: - multiplicando*i
		 activador += 1
		 multiplicando +=1
entrada: ninguna, pero trabajara con las sgtes constantes: activador
*/

#include <iostream>

using namespace std;

main(){
	//activador inicia el bucle, en 0 porque se va a iniciar 12 veces
	int activador = 0;
	//multiplicando se inicia en 1 porque no piden tablas de 0
	int multiplicando = 1;
	//solo se activara el bucle mientras que el activador sea menor a 12
	while(activador < 12){
		//aquie se imprimirá el enunciado de cada tabla antes de ejercutar el bucle que procesara los datos
		cout << "TABLA DE MULTIPLICAR DEL " << multiplicando << "\n\n";
		//se inicia con 1 y termina la tabla en 10 y se hará de uno en uno
		for(int i=1; i<11;i++){
			cout << "- " << multiplicando << " x " << i << " = " << multiplicando * i << endl;
		}
	cout << endl;
	//se incrementa en 1 el valor de la var de activacion de bucle
	activador += 1;
	//aqui el multiplicando se aumenta en 1 igual porque se necesitan las tablas de forma consecutiva
	multiplicando += 1;
	}
system("pause");
return 0;
}
