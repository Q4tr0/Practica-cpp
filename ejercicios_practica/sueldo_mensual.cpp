/*Construya un algoritmo para calcular el sueldo mensual de un empleado de cierta empresa.
El sueldo por hora de cada empleado depende de su cargo.
Cuando un empleado supera las 192 horas mensuales, las horas adicionales se consideran horas
extras y se pagan con un recargo sobre el valor ordinario de la hora.
Debe leer por pantalla el cargo del empleado y el número de horas trabajadas durante el mes.
Debe mostrar el sueldo mensual.
Para los cargos Gerente, Secretario y Aseador: el sueldo por hora es 60000, 55000 y 50000 respectivamente; y
el recargo por hora extra es del 10%, 8% y 6% respectivamente.
Nota: los valores monetarios están en miles de pesos./* 
/*============================================ANALISIS========================================
salida: 
		sueldo mensual... 6 opciones:
		salario mensual gerente sin horas extras; salario mensual gerente con horas extras
		salario mensual secretario sin horas extras; salario mensual secretario con horas extras
		salario mensual aseador sin horas extras; salario mensual aseador con horas extras
proceso:
		if salario mensual gerente >0 && <=192... salario mensual = horas mensuales * 60000... 
		else... horas extras = horas mensuales - 192 && recargo gerente = 60000*10/100... salario mensual = 192 * 60000 + horas extras * recargo gerente. 
		if salario mensual secretario >0 && <=192... salario mensual = horas mensuales * 60000... 
		else... horas extras = horas mensuales - 192 && recargo secretario = 55000*8/100... salario mensual = 192 * 55000 + horas extras * recargo secretario. 
		if salario mensual aseador >0 && <=192... salario mensual = horas mensuales * 60000... 
		else... horas extras = horas mensuales - 192 && recargo aseador = 50000*6/100... salario mensual = 192 * 50000 + horas extras * recargo aseador. 
entrada:
		tipo de empleado, horas mensuales 
*/
#include <iostream>

using namespace std;

int main(){

	int horas_mensuales, horas_extras, recargo_gerente, recargo_secretario, recargo_aseador;
	char tipo_empleado;

	cout << "ingrese el tipo de empleado: " << endl;
	cout << "gerente=(g), secretario(s), aseador(a): ";
	cin >> tipo_empleado;
	recargo_gerente=60000*10/100;		//conversion del valor de cada hora extra del gerente
	recargo_secretario=55000*8/100;		//conversion del valor de cada hora extra del secretario
	recargo_aseador=50000*6/100;		//conversion del valor de cada hora extra del aseador
	if (tipo_empleado=='g'){
		cout << "ingrese las horas mensuales trabajadas: ";
		cin >> horas_mensuales;
		horas_extras= horas_mensuales-192;
		if (horas_mensuales >=0 && horas_mensuales<=192){
			//aqui se imprime el valor mensual sin horas extras
			cout << "el salario mensual es: " << horas_mensuales * 60000 << endl; 
		}
		else if(horas_mensuales>192){
			//aqui se imprime el valor mensual mas las horas extras, representadas con la variable recargo_gerente
			cout << "el salario mensual es: " << 192 * 60000 + horas_extras * recargo_gerente << endl; 
		}
		else{
			cout << "usted ha ingresado un valor invalido!" << endl;
		}
	}
	else if (tipo_empleado=='s'){
		cout << "ingrese las horas mensuales trabajadas: ";
		cin >> horas_mensuales;
		horas_extras= horas_mensuales-192;
		if (horas_mensuales >=0 && horas_mensuales<=192){
			//aqui se imprime el valor mensual sin horas extras
			cout << "el salario mensual es: " << horas_mensuales * 55000 << endl; 
		}
		else if(horas_mensuales>192){
			//aqui se imprime el valor mensual mas las horas extras, representadas con la variable recargo_secretario
			cout << "el salario mensual es: " << 192 * 55000 + horas_extras * recargo_secretario << endl; 
		}
		else{
			cout << "usted ha ingresado un valor invalido!" << endl;
		}
	}
	else if (tipo_empleado=='a'){
		cout << "ingrese las horas mensuales trabajadas: ";
		cin >> horas_mensuales;
		horas_extras= horas_mensuales-192;
		if (horas_mensuales >=0 && horas_mensuales<=192){
			//aqui se imprime el valor mensual sin horas extras
			cout << "el salario mensual es: " << horas_mensuales * 50000 << endl; 
		}
		else if(horas_mensuales>192)
			//aqui se imprime el valor mensual mas las horas extras, representadas con la variable recargo_aseador
			cout << "el salario mensual es: " << 192 * 50000 + horas_extras * recargo_aseador << endl; 
		else{
			cout << "usted ha ingresado un valor invalido!" << endl;
		}
	}
	else{
		cout << "usted ha ingresado un valor invalido!" << endl;
	}	

system("pause");
return 0;	
};

