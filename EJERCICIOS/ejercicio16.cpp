#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numeros;
	int n ;
	int suma = 0;
	double promedio = 0;
	int mayores = 0;
	for(int i=0;i<10;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>n;
		numeros.push_back(n);
		suma +=n;
	}
	promedio = suma / numeros.size();
	//Numeros encima del promedio 
	for(size_t i=0;i<numeros.size();i++){
		if(numeros[i] > promedio){
			mayores ++;
		}
	}
	
	cout<<"\nResultados\n";
	cout<<"Suma total: "<<suma<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Numeros mayores al promedio: "<<mayores<<endl;
	
	return 0;
}
