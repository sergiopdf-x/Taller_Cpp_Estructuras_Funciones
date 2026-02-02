#include <iostream>
using namespace std;

int main(){
	int matriz[2][4];
	int mayor;
	int filaMayor = 0, columnaMayor = 0;
	// Ingreso de la matriz
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
			// Inicializar mayor con el primer elemento
			if(i == 0 && j == 0){
				mayor = matriz[i][j];
			}
			// Comparar para encontrar el mayor
			if(matriz[i][j] > mayor){
				mayor = matriz[i][j];
				filaMayor = i;
				columnaMayor = j;
			}
		}
	}
	// Mostrar matriz
	cout<<"\nMatriz ingresada:\n";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 4; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nNumero mayor: "<<mayor<<endl;
	cout<<"Posicion: Fila "<<filaMayor<<" , Columna "<<columnaMayor<<endl;

	return 0;
}
