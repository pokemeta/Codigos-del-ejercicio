#include <iostream>

using namespace std;

int main(){
	int numerosemana = 0;
	
	cout << "Introduce el numero del mes y determinaremos que mes es: ";
	cin >> numerosemana;
	
	switch(numerosemana){
		case 1:
			cout << "Este mes es enero." << endl;
			break;
		case 2:
			cout << "Este mes es febrero." << endl;
			break;
		case 3:
			cout << "Este mes es marzo." << endl;
			break;
		case 4:
			cout << "Este mes es abril." << endl;
			break;
		case 5:
			cout << "Este mes es mayo." << endl;
			break;
		case 6:
			cout << "Este mes es junio." << endl;
			break;
		case 7:
			cout << "Este mes es julio." << endl;
			break;
		case 8:
			cout << "Este mes es agosto." << endl;
			break;
		case 9:
			cout << "Este mes es septiembre." << endl;
			break;
		case 10:
			cout << "Este mes es octubre." << endl;
			break;
		case 11:
			cout << "Este mes es noviembre." << endl;
			break;
		case 12:
			cout << "Este mes es diciembre." << endl;
			break;
		default:
			return main();
	}
	
	return 0;
}
