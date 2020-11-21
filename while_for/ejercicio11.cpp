#include <iostream>

using namespace std;

int main(){
	int N = 0, x = 0, y = 1, z = 1;
	
	cout << "Se hara una serie de fibonacci, escribe cuantas veces quieres que se repita: ";
	cin >> N;
	cout << endl;
	
	cout << "1 ";
	for(int i = 1; i < N; i++){
		z = x + y;
		cout << z << " ";
		x = y;
		y = z;
	}
	
	cout << endl;
	return 0;
}
