#include <iostream>

using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	
	int num = 0;
	
	int sumnum = 0;
	int sumctd = 0;
	
	cout << "Numero 1: ";
	cin >> num1;
	
	cout << "Numero 2: ";
	cin >> num2;
	
	if(num1 > num2 || num1 == num2){
		
		cout << endl;
		return main();
		
	}
	else{
		
		cout << "Ahora escribe un numero entre ellos: ";
		cin >> num;
		
		sumctd++;
		
		if(num < num1 || num > num2 || num1 == num2){
			
			cout << endl;
			return main();
			
		}
		else{
			
			while(num > num1 || num < num2){
				
				sumnum += num;
				
				cout << "Vuelve a escribir un numero entre ellos: ";
				cin >> num;
				
				sumctd++;
				
				if(num < num1 || num > num2){
					break;
				}
				
			}
			
		}
		
	}
	
	cout << endl;
	cout << "Se sumaron " << sumctd << " veces" << endl;
	cout << "Tu resultado de la suma fue: " << sumnum << endl;
	
	return 0;
}
