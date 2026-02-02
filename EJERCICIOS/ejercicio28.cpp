#include <iostream>
using namespace std;

void ingresar(int v[]){
	for(int i = 0; i < 10; i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>v[i];
	}
}

void promedio(int v[]){
	int suma = 0;
	for(int i = 0; i < 10; i++){
		suma += v[i];
	}
	cout<<"Promedio: "<<suma / 10.0<<endl;
}

void mayorMenor(int v[]){
	int mayor = v[0], menor = v[0];
	for(int i = 1; i < 10; i++){
		if(v[i] > mayor) mayor = v[i];
		if(v[i] < menor) menor = v[i];
	}
	cout<<"Mayor: "<<mayor<<endl;
	cout<<"Menor: "<<menor<<endl;
}

void contar(int v[]){
	int positivos = 0, negativos = 0;
	for(int i = 0; i < 10; i++){
		if(v[i] > 0) positivos++;
		else if(v[i] < 0) negativos++;
	}
	cout<<"Numeros positivos: "<<positivos<<endl;
	cout<<"Numeros negativos: "<<negativos<<endl;
}

int main(){
	int opcion;
	int v[10];
	bool cargado = false;

	do{
		cout<<"\n----- MENU -----\n";
		cout<<"1. Ingresar 10 numeros\n";
		cout<<"2. Mostrar promedio\n";
		cout<<"3. Mostrar mayor y menor\n";
		cout<<"4. Contar positivos y negativos\n";
		cout<<"5. Salir\n";
		cout<<"Opcion: ";
		cin>>opcion;

		switch(opcion){
			case 1:
				ingresar(v);
				cargado = true;
				break;

			case 2:
				if(cargado) promedio(v);
				else cout<<"Ingrese los numeros primero\n";
				break;

			case 3:
				if(cargado) mayorMenor(v);
				else cout<<"Ingrese los numeros primero\n";
				break;

			case 4:
				if(cargado) contar(v);
				else cout<<"Ingrese los numeros primero\n";
				break;

			case 5:
				cout<<"Saliendo del programa...\n";
				break;

			default:
				cout<<"Opcion invalida\n";
		}
	}while(opcion != 5);

	return 0;
}
