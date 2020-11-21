#include <iostream>

using namespace std;

int main(){
	int resultado = 0;
	int N = 0;
	int ctd = 0;
	
	int res_total = 0;
	
	bool cont = false;
	int desi = 0;
	
	cout << "Introduce el numero para calcular el promedio: ";
	cin >> N;
	cout << endl;
	cont = true;
	
	while(cont == true){
		resultado += N;
		ctd++;
		
		cout << "Quiere introducir mas numeros? (escriba 1 para si, 0 para no): ";
		cin >> desi;
		cout << endl;
		
		if(desi <= 0){
			cont = false;
			break;
		}
		else if(desi >= 1){
			cout << "Introduce otro numero para calcular el promedio: ";
			cin >> N;
			cout << endl;
		}
	}
	
	res_total = resultado / ctd;
	
	cout << "El promedio es: " << res_total;
	
	return 0;
}
