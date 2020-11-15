#include <iostream>

using namespace std;

int main(){
	int segundosin = 0;
	
	cout << "Escribe tus segundos para convertir a minutos y horas: ";
	cin >> segundosin;
	
	if(segundosin <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	
	int minutos = segundosin / 60;
	segundosin %= 60;
	
	int horas = minutos / 60;
	minutos %= 60;
	
	cout << "Tus segundos fueron convertidos a lo siguiente: " << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Horas: " << horas;
	
	
	return 0;
}
