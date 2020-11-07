#include <iostream>

using namespace std;

int main(){
	int preciototal = 0;
	float condescuento = 0;
	
	cout << "escribe tu total a pagar: ";
	cin >> preciototal;
	
	if(preciototal <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	else if(preciototal < 500){
		condescuento = preciototal - (preciototal * 0.10);
	}
	else if(preciototal > 500){
		condescuento = preciototal - (preciototal * 0.20);
	}
	
	cout << "El total con descuento aplicado es: " << condescuento;
	
	return 0;
}
