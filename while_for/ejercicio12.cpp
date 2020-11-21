#include <iostream>

using namespace std;

int main(){
	int nume1 = 0;
	int nume2 = 0;
	
	cout << "Escribe tu primer numero: ";
	cin >> nume1;
	cout << endl;

	cout << "Escribe tu segundo numero: ";
	cin >> nume2;
	cout << endl;
	
	for(int i = nume1; i < nume2; i++){
		if(i % 3 == 0 && i % 7 == 0){
			cout << i << endl;
		}
	}
	
	cout << "Estos son todos los numeros multiplos de 3 y 7 que estan entre " << nume1 << " y " << nume2;
	
	return 0;
}
