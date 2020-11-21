#include <iostream>

using namespace std;

int main(){
	int numero_capturado = 0;
	int ctd_10 = 0;
	int total = 0;
	
	bool dise = false;
	int nise = 0;
	
	cout << "Introduce tu numero inicial: ";
	cin >> numero_capturado;
	cout << endl;
	ctd_10++;
	
	for(int i = 1; i != 10; i++){
		if(ctd_10 <= 10){
			if(numero_capturado % 2 != 0){
				if(numero_capturado % 5 == 0){
					total += numero_capturado;
				}
				else{
					cout << "Advertencia: Este numero no es multiplo de 5, no se sumara." << endl;
				}
			}
			else{
				cout << "Advertencia: Este numero no es impar, no se sumara." << endl;
			}
			cout << "Vuelve a introducir otro numero: ";
			cin >> numero_capturado;
			cout << endl;
			ctd_10++;
		}
	}
	
	if(ctd_10 == 10 && numero_capturado % 2 != 0 && numero_capturado % 5 == 0){
		total += numero_capturado;
	}
	
	cout << "Deseas continuar? (escribe 1 para si, 0 para no): ";
	cin >> nise;
	
	if(nise >= 1){
		dise = true;
		
		while(dise == true){
			cout << "Puedes seguir metiendo mas numeros, pero solo se sumaran los primeros 10 numeros que ya registraste antes: ";
			cin >> numero_capturado;
			cout << endl;
			
			cout << "Deseas continuar? (escribe 1 para si, 0 para no): ";
			cin >> nise;
			
			if(nise <= 0){
				dise = false;
				break;
			}
		}
		
		cout << "El total de la suma de tus primeros 10 numeros, siendo que sean impar y multiplo de 5, es: " << total;
	}
	else{
		cout << "El total de la suma de tus primeros 10 numeros, siendo que sean impar y multiplo de 5, es: " << total;
	}
	
	return 0;
}
