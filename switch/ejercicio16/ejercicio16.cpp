#include <iostream>

using namespace std;

int resultado_enteros = 0;
float resultado_decimal = 0;

int main(){
	int opc = 0;
	
	int nu1 = 0;
	int nu2 = 0;
	
	float num1 = 0;
	float num2 = 0;
	
	cout << "Seleccione una opcion de operacion a sus numeros" << endl;
	cout << "1.- Suma" << endl;
	cout << "2.- Resta" << endl;
	cout << "3.- Multiplicacion" << endl;
	cout << "4.- Division" << endl;
	cout << "5.- Salir" << endl << endl;
	
	cout << "Opcion: ";
	cin >> opc;
	cout << endl;
		
	switch(opc){
		case 1:
			cout << "Escribe tu primer numero: ";
			cin >> nu1;
			cout << endl;
			
			cout << "Escribe tu segundo numero: ";
			cin >> nu2;
			cout << endl << endl;
			
			resultado_enteros = nu1 + nu2;
			
			cout << "El resultado de la suma de tus numeros es: " << resultado_enteros << endl;
			break;
		case 2:
			cout << "Escribe tu primer numero: ";
			cin >> nu1;
			cout << endl;
			
			cout << "Escribe tu segundo numero: ";
			cin >> nu2;
			cout << endl << endl;
			
			resultado_enteros = nu1 - nu2;
			
			cout << "El resultado de la resta de tus numeros es: " << resultado_enteros << endl;
			break;
		case 3:
			cout << "Escribe tu primer numero: ";
			cin >> num1;
			cout << endl;
			
			cout << "Escribe tu segundo numero: ";
			cin >> num2;
			cout << endl << endl;
			
			resultado_decimal = num1 * num2;
			
			cout << "El resultado de la multiplicacion de tus numeros es: " << resultado_decimal << endl;
			break;
		case 4:
			cout << "Escribe tu primer numero: ";
			cin >> num1;
			cout << endl;
			
			cout << "Escribe tu segundo numero: ";
			cin >> num2;
			cout << endl << endl;
			
			resultado_decimal = num1 / num2;
			
			cout << "El resultado de la division de tus numeros es: " << resultado_decimal << endl;
			break;
		case 5:
			break;
		default:
			return main();
	}
	
	return 0;
}
