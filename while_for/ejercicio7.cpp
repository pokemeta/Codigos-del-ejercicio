#include <iostream>

using namespace std;

int main(){
	int comp10 = 1;
	int res = 0;
	
	int multi = 1;
	
	cout << "Las tablas de multiplicar del 1 al 10 son asi: " << endl;
	
	while(multi < 11){
		
		res = multi * comp10;
		cout << comp10 << " x " << multi << " = " << res << endl;
		multi++;
		
		if(multi >= 11 && comp10 <= 10){
			comp10++;
			multi = 1;
			cout << endl;
		}
		
		if(multi == 10 && comp10 == 10){
			res = multi * comp10;
			cout << comp10 << " x " << multi << " = " << res << endl;
			break;
		}
	}
	
	return 0;
}
