#include <iostream>
using namespace std;

int main(){
	
	int numeros[15];
	int sumaPositivos = 0, sumaNegativos = 0;
	float promedioPositivos = 0, promedioNegativos = 0;
	int contadorPositivos = 0, contadorNegativos = 0;
	for(int i=0;i<15;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>numeros[i];
		if(numeros[i] > 0){
			sumaPositivos += numeros[i];
			contadorPositivos++;
		}else{
			sumaNegativos += numeros[i];
			contadorNegativos ++;
		}
	}
	
	if(contadorPositivos > 0){
		promedioPositivos = sumaPositivos / (double)contadorPositivos;
	}
	
	if(contadorNegativos > 0){
	    promedioNegativos = sumaNegativos / (double)contadorNegativos;
	}

	cout<<"\nResultados\n";
	cout<<"Promedio numeros positivos: "<<promedioPositivos<<endl;
	cout<<"Promedio numeros negativos: "<<promedioNegativos<<endl;

	return 0;
}
