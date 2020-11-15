#include <iostream>

using namespace std;

int main(){
	int nu1 = 0;
	int nu2 = 0;
	
	cout << "Escribe tu primer numero: ";
	cin >> nu1;
	cout << endl;
	
	cout << "Escribe tu segundo numero: ";
	cin >> nu2;
	cout << endl;
	
	if(nu1 < nu2){
		cout << "Tus numeros estan en orden creciente";
	}
	else if(nu1 > nu2){
		cout << "Tus numeros estan en orden decreciente";
	}
	
	return 0;
}
