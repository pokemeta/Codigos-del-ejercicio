#include <iostream>

using namespace std;

int main(){
	int num_pos = 0;
	
	cout << "Introduce un numero positivo que sirva para mostrar su cantidad en asteriscos: ";
	cin >> num_pos;
	cout << endl;
	
	if(num_pos >= 50 || num_pos <= 0){
		return main();
	}
	else{
		for(int i = 1; i <= num_pos; i++){
			cout << " * ";
		}
	}
	return 0;
}
