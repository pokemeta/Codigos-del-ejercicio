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
	
	
	if(cen==1){
		cout<<"C";
	}
	
	
	if(dec==1){
		cout<<"X";
	}
	if(dec==2){
		cout<<"XX";
	}
	if(dec==3){
		cout<<"XXX";
	}
	if(dec==4){
		cout<<"XL";
	}
	if(dec==5){
		cout<<"L";
	}
	if(dec==6){
		cout<<"LX";
	}
	if(dec==7){
		cout<<"LXX";
	}
	if(dec==8){
		cout<<"LXXX";
	}
	if(dec==9){
		cout<<"XC";
	}
	
	
	if(uni==1){
		cout<<"I";
	}
	if(uni==2){
		cout<<"II";
	}
	if(uni==3){
		cout<<"III";
	}
	if(uni==4){
		cout<<"IV";
	}
	if(uni==5){
		cout<<"V";
	}
	if(uni==6){
		cout<<"VI";
	}
	if(uni==7){
		cout<<"VII";
	}
	if(uni==8){
		cout<<"VIII";
	}
	if(uni==9){
		cout<<"IX";
	}
	
	return 0;
}

