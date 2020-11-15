#include <iostream>

using namespace std;

int main(){
	float peso = 0;
	float altura = 0;
	float IMC = 0;
	
	cout << "Introduce tu peso en kilogramos: ";
	cin >> peso;
	cout << endl;
	
	cout << "Introduce tu altura en metros: ";
	cin >> altura;
	cout << endl;
	
	IMC = peso / (altura * altura);
	
	cout << "Tu indice de masa corporal es: " << IMC << endl;
	
	if(IMC <= 18.5){
		cout << "Tu estas por debajo de lo saludable";
	}
	if(IMC >= 18.5 && IMC <= 24.9){
		cout << "Estas saludable";
	}
	if(IMC >= 25.0 && IMC <= 29.9){
		cout << "Tienes sobrepeso";
	}
	if(IMC >= 30.0 && IMC <= 39.9){
		cout << "Estas obeso";
	}
	if(IMC >= 40){
		cout << "Tienes obesidad extrema";
	}
	
	
	return 0;
}
