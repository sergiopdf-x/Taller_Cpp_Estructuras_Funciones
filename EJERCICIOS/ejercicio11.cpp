#include <iostream>
using namespace std;

int main(){
	int numeros[10];
	int suma = 0, positivo = 0, negativo = 0;
	
	//Ingresar datos en el arreglo
	for(int i=0;i<10;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>numeros[i];
		suma += numeros[i];
		
		if(numeros[i] > 0){
			positivo ++;
		}else if(numeros[i] < 0){
			negativo ++;
		}
	}
	
	//Calculos
	double promedio = suma / 10.0;
	double porcentajePositivos = (positivo*100.0)/10;
	double porcentajeNegativos = (negativo*100.0)/10;
	
	cout<<"\nResultados\n";
	cout<<"Suma total: "<<suma<<endl;
	cout<<"Promedio total: "<<promedio<<endl;
	cout<<"Porcentaje numeros positivos: "<<porcentajePositivos<<"%"<<endl;
	cout<<"Porcentaje numeros negativos: "<<porcentajeNegativos<<"%"<<endl;
	
	return 0;
}
