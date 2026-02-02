#include <iostream>
using namespace std;

int main(){
	int numeros[12];
	int sumaPares = 0, sumaImpares = 0;
	for(int i=0;i<12;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>numeros[i];
		if(numeros[i] % 2 == 0){
			sumaPares += numeros[i];
		}else{
			sumaImpares += numeros[i];
		}
	}
	
	cout<<"\nResultados\n";
	cout<<"Suma numeros pares: "<<sumaPares<<endl;
	cout<<"Suma numeros impares: "<<sumaImpares<<endl;
	if(sumaPares > sumaImpares ){
			cout<<"La suma mayor son los pares."<<endl;
	}else if(sumaPares < sumaImpares){
		cout<<"La suma mayor son los impares."<<endl;
	}else{
		cout<<"Ambas son iguales."<<endl;
	}

	return 0;
}
