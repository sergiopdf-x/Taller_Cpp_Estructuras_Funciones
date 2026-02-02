#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	int rango = 0;
	vector<int> numeros;
	for(int i=0;i<8;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>n;
		numeros.push_back(n);
	}
	
	int maximo = numeros[0];
	int minimo = numeros[0];
	
	for(size_t i=0;i<numeros.size();i++){
		if(numeros[i] > maximo){
			maximo = numeros[i];
		}else if(numeros[i] < minimo){
			minimo = numeros[i];
		}
	}
	
	rango = maximo - minimo;
	cout<<"\nResultados\n";
	cout<<"Valor maximo: "<<maximo<<endl;
	cout<<"Valor minimo: "<<minimo<<endl;
	cout<<"Rango: "<<rango<<endl;
	
	return 0;
}
