#include <iostream>

using namespace std;

int conv1 = 0;
int conv2 = 0;
int conv4 = 0;

float centimetros = 0;

double Mconv = 0;
double DMconv = 0;
double KMconv = 0;

int main(){
	cout << "Vamos a convertir una distancia en centimetros a diferentes unidades, Introduce si quiere o no la unidad convertida usando 0 y 1: " << endl;
	cout << "Metros?: ";
	cin >> conv1;
	cout << endl;
	
	cout << "Decimetros?: ";
	cin >> conv2;
	cout << endl;
	
	cout << "Kilometros?: ";
	cin >> conv4;
	cout << endl;
	
	if(conv1 < 0 || conv1 > 1 || conv2 < 0 || conv2 > 1 || conv4 < 0 || conv4 > 1 ){
		cout << "Uno de tus numeros dio error, vuelve a introducir los numeros." << endl << endl;
		return main();
	}
	else{
		cout << "Ahora, introduce tu numero en centimetros para hacer las conversiones correspondientes: ";
		cin >> centimetros;
		cout << endl;
	}
	
	if(conv1 == 1){
		Mconv = centimetros / 100;
	}
	
	if(conv2 == 1){
		DMconv = centimetros / 10;
	}
	
	if(conv4 == 1){
		KMconv = centimetros / 100000;
	}
	
	cout << "Tus centimetros convertidos a las unidades que pediste son: " << endl;
	if(Mconv != 0){
		cout << "Metros: " << Mconv << endl;
	}
	
	if(DMconv != 0){
		cout << "Decimetros: " << DMconv << endl;
	}
	
	if(KMconv != 0){
		cout << "Kilometros: " << KMconv << endl;
	}
	
	return 0;
}
