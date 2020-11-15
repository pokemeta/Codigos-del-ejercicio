#include <iostream>

using namespace std;

int main(){
	
	int numeroAromano = 0, uni = 0, dec = 0, cen = 0;
	cout << "Ingrese un numero del 1 al 100: ";
	cin >> numeroAromano;
	
	if(numeroAromano < 1 || numeroAromano > 100){
		cout << "El numero que introduciste no puede ser convertido." << endl << endl;
		return main();
	}
	
	uni = numeroAromano % 10;
	numeroAromano /= 10;
	
	dec = numeroAromano % 10;
	numeroAromano /= 10;
	
	cen = numeroAromano % 10;
	numeroAromano /= 10;
	
	switch(cen){
		case 1:
			cout<<"C";
			break;
	}
	
	switch(dec){
		case 1: 
			cout<<"X";
			break;
		case 2: 
			cout<<"XX";
			break;
		case 3:
			cout<<"XXX";
			break;
		case 4: 
			cout<<"XL";
			break;
		case 5: 
			cout<<"L";
			break;
		case 6: 
			cout<<"LX";
			break;
		case 7: 
			cout<<"LXX";
			break;
		case 8: 
			cout<<"LXXX";
			break;
		case 9: 
			cout<<"XC";
			break;
	}
	
	switch(uni){
		case 1: 
			cout<<"I";
			break;
		case 2:
			cout<<"II";
			break;
		case 3:
			cout<<"III";
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"V";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
	}
	
	return 0;
}

