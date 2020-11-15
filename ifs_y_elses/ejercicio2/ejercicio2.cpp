#include <iostream>

using namespace std;

int main(){
	float sueldotrabajador = 0;
	
	float resdo = 0;
	
	cout << "Escribe tu sueldo: ";
	cin >> sueldotrabajador;
	
	if(sueldotrabajador <= 0){
		cout << "Tu numero no es valido." << endl;
		return main();
	}
	else if(sueldotrabajador > 2000 && sueldotrabajador <= 3500){
		resdo = sueldotrabajador - (sueldotrabajador * 0.10) - (2000 * 0.05);
	}
	else if(sueldotrabajador > 2000 && sueldotrabajador > 3500){
		resdo = sueldotrabajador - (sueldotrabajador * 0.10) - (2000 * 0.05) - (3500 * 0.03);
	}
	else if(sueldotrabajador <= 2000){
		resdo = sueldotrabajador - (sueldotrabajador * 0.10);
	}
	
	cout << "Tu sueldo real es: " << resdo;
	
	return 0;
}
