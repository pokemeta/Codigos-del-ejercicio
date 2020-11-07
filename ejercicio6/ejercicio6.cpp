#include <iostream>

using namespace std;

int main() {
	float horastrabajadas = 0;
	float elcostohora = 0;
	float totalpagar = 0;
	
	cout << "Introduce la cantidad de horas que trabajo el empleado: ";
	cin >> horastrabajadas;
	
	cout << "Introduce cuanto es lo que se le paga por hora: ";
	cin >> elcostohora;
	
	if(horastrabajadas <= 0 || elcostohora <= 0){
		cout << "Tus numeros no son valido." << endl;
		return main();
	}
	else if(horastrabajadas < 40){
		totalpagar = (horastrabajadas * elcostohora) - 50;
	}
	else if(horastrabajadas > 40){
		totalpagar = (horastrabajadas * elcostohora) + 100; 
	}
	
	cout << "Su sueldo a pagar por la quincena es: " << totalpagar;
	
	return 0;
}
