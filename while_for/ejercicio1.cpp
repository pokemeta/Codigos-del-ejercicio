#include <iostream>

using namespace std;

int main(){
	int numeros_sumados = 0;
	int sumas = 0;
	
	cout << "Escribe el numero de tu preferencia: ";
	cin >> numeros_sumados;
	cout << endl;
	
	sumas += numeros_sumados;
	
	while(numeros_sumados != 0){
		
		cout << "Vuelve a introducir otro numero de tu preferencia para sumar: ";
		cin >> numeros_sumados;
		cout << endl;
		
		sumas += numeros_sumados;
		
		if(numeros_sumados == 0){
			cout << "La suma total de tus numeros es: " << sumas << endl;
			break;
		}
	}
	
	return 0;
}
