#include <iostream>

using namespace std;

int main(){
	float horastrabajadas = 0;
	float tarifatotal = 0;
	float resultado = 0;
	
	cout << "Escribe las horas trabajadas del maestro: ";
	cin >> horastrabajadas;
	cout << endl;
	
	cout << "Escribe su cuota de pago por hora: ";
	cin >> tarifatotal;
	cout << endl;
	
	if(horastrabajadas <= 0 || tarifatotal <= 0){
		cout << "Tus numeros no son validos." << endl;
		return main();
	}
	if(horastrabajadas > 40){
		resultado = (tarifatotal * horastrabajadas) + (((horastrabajadas - 40) * 0.5) * tarifatotal);
	}
	else{
		resultado = tarifatotal * horastrabajadas;
	}
	
	cout << "La cuota por pagar en total del profesor es: " << resultado << " pesos";
	
	return 0;
}
