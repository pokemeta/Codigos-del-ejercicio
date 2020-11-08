#include <iostream>

using namespace std;

	int jabones1 = 10;
	int juguetes1 = 10;
	int dulces1 = 10;
	
	int jabonescomprados = 0;
	int pelotitacomprados = 0;
	int barracomprada = 0;
	
	float totaljabones = 0;
	float totalpelota = 0;
	float totalbarra = 0;
	
	float totalabsoluto = 0;

int main(){
	int decision = 0;
	
	float precio1 = 24.7;
	float precio2 = 102.60;
	float precio3 = 5.28;
	
	cout << "Bienvenido a la tienda de la esquina! estos son nuestos productos: " << endl << endl;
	cout << "Productos de la casa" << endl;
	cout << "----1.- Jabones 1 x $24.70: " << jabones1 << endl;
	cout << "Ninos" << endl;
	cout << "----2.- pelotita 1 x $102.60: " << juguetes1 << endl;
	cout << "Productos del mostrador" << endl;
	cout << "----3.- Barra de chocolate 1 x $5.28: " << dulces1 << endl;
	cout << "4.- Pasar a la caja para pagar"<< endl;
	cout << "Introduzca el numero del producto que quieras comprar o tu accion: ";
	cin >> decision;
	cout << endl << endl;
	if(decision <= 0 || decision >= 5){
		return main();
	}
	else if(decision == 1){
		if(jabones1 > 0){
			jabones1--;
			jabonescomprados++;
		}
		else{
			cout << "Ya se agotaron los jabones!" << endl << endl;
		}
		return main();
	}
	else if(decision == 2){
		if(juguetes1 > 0){
			juguetes1--;
			pelotitacomprados++;
		}
		else{
			cout << "Ya se agotaron las pelotitas!" << endl << endl;
		}
		return main();
	}
	else if(decision == 3){
		if(dulces1 > 0){
			dulces1--;
			barracomprada++;
		}
		else{
			cout << "Ya se agotaron las barras de chocolate!" << endl << endl;
		}
		return main();
	}
	else if(decision == 4){
		if(jabones1 == 10 && juguetes1 == 10 && dulces1 == 10){
			cout << "No has comprado nada!" << endl << endl;
			return main();
		}
		else{
			cout << "Este es el cajero, vamos a procesar su compra: " << endl;
		
			totaljabones = jabonescomprados * precio1;
			totalpelota = pelotitacomprados * precio2;
			totalbarra = barracomprada * precio3;
			
			cout << endl;
			cout << "Su recibo seria: " << endl;
			cout << "Producto              Cantidad           Precio en total" << endl;
			cout << "--------              --------           ---------------" << endl;
			
			if(jabones1 != 10){
				cout << "Jabones                " << jabonescomprados << "                    $" << totaljabones << endl;
			}
			
			if(juguetes1 != 10){
				cout << "Pelotitas              " << pelotitacomprados << "                    $" << totalpelota << endl;
			}
			if(dulces1 != 10){
				cout << "Barras de chocolate    " << barracomprada << "                    $" << totalbarra << endl;
			}
			
			cout << endl;
			totalabsoluto = totaljabones + totalpelota + totalbarra;
			cout << "Total a pagar: $" << totalabsoluto << endl;
		}
	}
	
	return 0;
}
