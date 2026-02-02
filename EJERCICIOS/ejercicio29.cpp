#include <iostream>
using namespace std;

int main(){
	int matriz[3][3];
	int suma = 0;
	
	// Ingreso de datos
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
			suma += matriz[i][j];
		}
	}

	// Mostrar matriz
	cout<<"\nMatriz ingresada:\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<"\nSuma total de los elementos: "<<suma<<endl;
	return 0;
}
