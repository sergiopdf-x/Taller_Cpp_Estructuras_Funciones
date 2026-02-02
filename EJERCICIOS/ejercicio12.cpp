#include <iostream>
using namespace std;

int main(){
	int numeros[8];
	int mayor, menor;
	int diferencia = 0;
	for(int i=0;i<8;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}else if(numeros[i]<menor){
			menor = numeros[i];
		}
	}
	
	diferencia = mayor-menor;
	cout<<"\nResultados\n";
	cout<<"Numero mayor: "<<mayor<<endl;
	cout<<"Numero menor: "<<menor<<endl;
	cout<<"Diferencia: "<<diferencia<<endl;
	
	return 0;
}
