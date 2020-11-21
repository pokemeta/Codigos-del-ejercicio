#include <iostream>

using namespace std;

int main(){
	int N = 0;
	int res = 0;
	
	cout << "Escribe tu numero, de ahi sacamos la cuadrada de cada uno, y asi tenemos el resultado: ";
	cin >> N;
	
	for(int i = 0; i <= N; i++){
		res += i * i;
	}
	
	cout << "Tu resultado final es: " << res;
	
	return 0;
}
