#include <iostream>

using namespace std;

int main(){
	int resultado = 0;
	int N = 0;
	
	cout << "Introduce el numero para calcular la media: ";
	cin >> N;
	cout << endl;
	
	for(int i = 1; i <= N; i++){
		cout << i << endl;
		
		if(i == N){
			resultado = i * 0.5;
		}
	}
	
	cout << "La media es: " << resultado;
	
	return 0;
}
