#include <iostream>

using namespace std;

int main() {
	float totalpago;
	
	cout << "Introduzca su total de la compra para determinar el descuento: ";
	cin >> totalpago;
	
	if(totalpago <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	else if(totalpago < 200){
		cout << "No te toca algun descuento";
		cout << "Tu precio a pagar es: " << totalpago;
	}
	else if(totalpago > 200 && totalpago <= 400){
		totalpago = totalpago - (totalpago * 0.10);
	}
	else if(totalpago > 400 && totalpago < 800){
		totalpago = totalpago - (totalpago * 0.20);
	}
	else if(totalpago >= 800){
		totalpago = totalpago - (totalpago * 0.30);
	}
	
	cout << "Tu precio a pagar es: " << totalpago;
	
	return 0;
}
