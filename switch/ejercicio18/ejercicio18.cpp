#include <iostream>

using namespace std;

int main(){
	int numerosemana = 0;
	
	cout << "Introduce el numero de la semana y determinaremos que dia es: ";
	cin >> numerosemana;
	
	switch(numerosemana){
		case 1:
			cout << "Hoy es lunes." << endl;
			break;
		case 2:
			cout << "Hoy es Martes." << endl;
			break;
		case 3:
			cout << "Hoy es Miercoles." << endl;
			break;
		case 4:
			cout << "Hoy es Jueves." << endl;
			break;
		case 5:
			cout << "Hoy es Viernes." << endl;
			break;
		case 6:
			cout << "Hoy es Sabado." << endl;
			break;
		case 7:
			cout << "Hoy es Domingo." << endl;
			break;
		default:
			return main();
	}

	return 0;
}
