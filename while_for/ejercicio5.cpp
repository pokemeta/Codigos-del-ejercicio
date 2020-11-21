#include <iostream>

using namespace std;

int main(){
	int N = 0;
	int ctd_pos = 0;
	int ctd_mayor50 = 0;
	int tot = 0;
	
	int des = 0;
	bool continuar = false;
	
	cout << "Registre su numero por favor: ";
	cin >> N;
	continuar = true;
	cout << endl;
	
	while(continuar == true){
		if(N > 0){
			ctd_pos++;
		}
		
		if(N > 50){
			ctd_mayor50++;
		}
		
		tot += N;
		
		cout << "Desea continuar? (escriba 1 para si, 0 para no): ";
		cin >> des;
		cout << endl;
		
		if(des <= 0){
			continuar = false;
			break;
		}
		else if(des >= 1){
			cout << "Registre otro numero por favor: ";
			cin >> N;
			cout << endl;
		}
	}
	
	cout << "La suma total de sus numeros es: " << tot << endl;
	cout << "Y de sus numeros registrados, " << ctd_pos << " son positivos." << endl;
	cout << "Adicionalmente, " << ctd_mayor50 << " son mayores a 50.";
	
	return 0;
}
