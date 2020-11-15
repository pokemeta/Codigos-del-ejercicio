#include <iostream>

using namespace std;

int main(){
	int punadodeminutos = 0;

	cout << "Introduce tus minutos: ";
	cin >> punadodeminutos;
	
	if(punadodeminutos <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	else{
		
		int hora = punadodeminutos / 3600;
		punadodeminutos %= 3600;
		
		int dia = punadodeminutos / (24*3600);
		punadodeminutos = punadodeminutos % (24*3600);
		
		cout << "tus minutos convertidos son los siguientes: " << endl;
		cout << "dias: " << dia << endl;
		cout << "horas: " << hora << endl;
		cout << "Minutos: " << punadodeminutos;
	}
	
	return 0;
}
