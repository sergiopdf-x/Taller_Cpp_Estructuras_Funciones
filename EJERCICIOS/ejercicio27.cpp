#include <iostream>
using namespace std;

void ingresar(int &num){
	cout<<"Ingrese un numero: ";
	cin>>num;
}

void dentroR(int num){
	if(num>=1 && num<=100){
		cout<<"El numero ingresado esta entre el rango (1-100)";
	}else{
		cout<<"El numero ingresado esta fuera del rango (1-100)";
	}
}

void parImpar(int num){
	if(num % 2 == 0){
		cout<<"El numero ingresado es par\n";
	}else{
		cout<<"El numero ingresado es impar\n";
	}
}

int main(){
	int opcion, num;
	bool ingresado = false;

	do{
		cout<<"\n--- MENU ---\n";
		cout<<"1. Ingresar numero\n";
		cout<<"2. Verificar dentro de rango\n";
		cout<<"3. Par o Impar\n";
		cout<<"4. Salir\n";
		cout<<"Ingrese una opcion: ";
		cin>>opcion;

		switch(opcion){
			case 1:
				ingresar(num);
				ingresado = true;
				break;
			case 2:
				dentroR(num);
				break;
			case 3:
				parImpar(num);
				break;
			case 4:
				cout<<"Saliendo del programa....\n";
				break;
			default:
				cout<<"Opcion no valida...\n";
				break;
		}
	}while(opcion != 4);
	return 0;
}
