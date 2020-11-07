#include <iostream>

using namespace std;

int main() {
	string producto1;
	string producto2;
	string producto3;
	
	float prec1 = 0;
	float prec2 = 0;
	float prec3 = 0;
	
	float res1 = 0;
	float res2 = 0;
	float res3 = 0;
	
	float total = 0;
	
	cout << "Escriba el nombre de su producto 1: ";
	cin >> producto1;
	cout << "Escriba el nombre de su producto 2: ";
	cin >> producto2;
	cout << "Escriba el nombre de su producto 3: ";
	cin >> producto3;
	
	cout << "Escriba el precio de su producto 1: ";
	cin >> prec1;
	cout << "Escriba el precio de su producto 2: ";
	cin >> prec2;
	cout << "Escriba el precio de su producto 3: ";
	cin >> prec3;
	
	if(prec1 <= 0 || prec2 <= 0 || prec3 <= 0){
		cout << "Uno de los precios introducidos dio un error, por favor, vuelve a intentar." << endl << endl;
		return main();
	}
	
	res1 = prec1 + (prec1 * 0.16);
	res2 = prec2 + (prec2 * 0.16);
	res3 = prec3 + (prec3 * 0.16);
	
	if(res1 > 1000){
		res1 = res1 - (prec1 * 0.05);
	}
	
	if(res2 > 1000){
		res2 = res2 - (prec2 * 0.05);
	}
	
	if(res3 > 1000){
		res3 = res3 - (prec3 * 0.05);
	}
	
	total = total + res1 + res2 + res3;
	
	cout << endl;
	cout << "Tus productos a pagar con iva aplicado son: " << endl;
	cout << producto1 << ": $" << res1 << endl;
	cout << producto2 << ": $" << res2 << endl;
	cout << producto3 << ": $" << res3 << endl;
	
	cout<< "Total a pagar: $" << total << endl;
	
	return 0;
}
