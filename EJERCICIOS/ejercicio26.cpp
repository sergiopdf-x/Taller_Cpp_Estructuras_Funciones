#include <iostream>
using namespace std;

void ingresarValores(int &num1, int &num2){
	cout<<"Ingrese primer numero: ";
	cin>>num1;
	cout<<"Ingrese segundo numero: ";
	cin>>num2;
}

void suma_resta(int &num1, int &num2){
	cout<<"Resta: "<<num1-num2<<endl;
	cout<<"Suma: "<<num1+num2<<endl;
}

void mostrarMayor(int &num1, int &num2){
	if(num1>num2){
		cout<<"El numero mayor es: "<<num1<<endl;
	}else if(num2 > num1){
		cout<<"El numero mayor es: "<<num2<<endl;
	}else{
		cout<<"Los numeros son iguales."<<endl;
	}
}

int main(){
	int opcion;
	int num1, num2;
	do{
		cout<<"---------- MENU PRINCIPAL ----------\n";
		cout<<"1. Ingresar numeros\n";
		cout<<"2. Suma y resta.\n";
		cout<<"3. Mostrar mayor de los numeros.\n";
		cout<<"4. Salir.\n";
		cout<<"Ingrese una opcion: ";
		cin>>opcion;
		
		switch(opcion) {
			case 1:
				ingresarValores(num1,num2);
				break;
			case 2:
				suma_resta(num1,num2);
				break;
			case 3:
				mostrarMayor(num1,num2);
				break;
			case 4:
				cout<<"Saliendo del programa.......\n";
				break;
			default:
				cout<<"Opcion no valida..\n";
				break;
		}
	}while(opcion != 4);
	return 0;
}
