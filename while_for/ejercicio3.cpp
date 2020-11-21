#include <iostream>

using namespace std;

int main(){
	int resultado = 0;
	int N = 0;
	
	cout << "Introduce el numero para calcular la media de todos los que entren en el: ";
	cin >> N;
	cout << endl;
	
	for(int i = 1; i <= N; i++){
		cout << i << endl;
		
		if(i == N){
			resultado = i;
		}
	}
	
	cout << "El numero mayor es es: " << resultado;
	
	return 0;
}
