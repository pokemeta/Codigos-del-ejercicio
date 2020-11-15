#include <iostream>

using namespace std;

int main(){
	float radiocirculo = 0;
	float resul = 0;
	float resul50 = 0;
	float resul25 = 0;
	
	cout << "Introduce la distancia de la radio del circulo en metros: ";
	cin >> radiocirculo;
	
	if(radiocirculo <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	
	resul = 2 * 3.1416 * radiocirculo;
	resul50 = resul - (resul * 0.5);
	resul25 = resul50 - (resul50 * 0.25);
	
	
	cout << "El perimetro de su circulo es: " << resul << " metros" << endl;
	cout << "El perimetro de su circulo reducido del 50% es: " << resul50 << " metros" << endl;
	cout << "Adicionalmente, el porcentaje reducido en un 25% del resultado de la reduccion anterior, es: " << resul25 << " mentros";
	
	return 0;
}
