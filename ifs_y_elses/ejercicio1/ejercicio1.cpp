#include <iostream>

using namespace std;

int main(){
	int numerohoras = 0;
	
	int resultado = 0;
	
	cout << "Escribe las horas trabajadas en la quincena: ";
	cin >> numerohoras;
	
	if(numerohoras <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	else if(numerohoras <= 80){
		resultado = numerohoras * 240;
	}
	else if (numerohoras > 80 && numerohoras <= 90){
		resultado = numerohoras * 240 * 1.20;
	}
	else if (numerohoras > 80 && numerohoras > 90){
		resultado = numerohoras * 240 * 1.30;
	}
	
	cout << endl;
	cout << "Tu sueldo por horas trabajadas sera: " << resultado << endl;
	
	return 0;
}
