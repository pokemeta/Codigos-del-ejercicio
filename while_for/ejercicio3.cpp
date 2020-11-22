#include <iostream>

using namespace std;

int main(){
	int N = 0;
	int mayor = 0;
	int dsnum = 0;
	
	bool ds = false;
	
	cout << "Escribe un numero, luego escribiras otro para comparar cual es mayor: ";
	cin >> N;
	cout << endl;
	
	ds = true;
	mayor = N;
	
	while(ds == true){
		
		cout << "Ahora introduce otro numero: ";
		cin >> N;
		cout << endl;
		
		if(N > mayor){
			mayor = N;
		}
		
		cout << "Quieres introducir mas numeros para continuar? (escribe 1 para si, 0 para no): ";
		cin >> dsnum;
		cout << endl;
		
		if(dsnum <= 0){
			ds = false;
			break;
		}
	}
	
	cout << "El numero mayor de los que introdujiste es: " << mayor;
	
	return 0;
}
