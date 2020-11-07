#include <iostream>

using namespace std;

int main() {
	float duracionminutos = 0;
	float cobro = 0;
	
	cout << "Introduzca en minutos cuanto duro su llamada: ";
	cin >> duracionminutos;
	
	//3 minutos = $0.5, cada minuto extra suma $0.8
	
	if(duracionminutos <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	else if(duracionminutos < 3){
		cobro = 0.50;
	}
	else if(duracionminutos > 3){
		cobro = (duracionminutos - 3) * 0.8;
		cobro = cobro + 0.50;
	}
	
	cout << "Su total a pagar de la cuota es: " << cobro;
	
	return 0;
}
