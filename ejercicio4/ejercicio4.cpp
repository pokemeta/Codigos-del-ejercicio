#include <iostream>

using namespace std;

int main(){
	int segundosbanco = 0;
	int total = 0;
	
	cout << "Escribe tus segundos de 100 en adelante para calcular cuantos segundos te faltan para el siguiente minuto: ";
	cin >> segundosbanco;
	
	
	eif(segundosbanco < 100){
		cout << "Su numero no es mayor a 100." << endl;
		return main();
	}
	else{
		segundosbanco %= 60;
		total = 60 - segundosbanco;
		
		cout << "Los segundos que te faltan para completar el minuto son: " << total;
	}
	
	return 0;
}
