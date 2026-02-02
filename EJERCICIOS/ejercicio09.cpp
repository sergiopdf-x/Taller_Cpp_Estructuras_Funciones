#include <iostream>
using namespace std;

int main(){
	int n;
	int dentroRango = 0, fueraRango = 0;
	for(int i=1;i<=15;i++){
		cout<<"Numero "<<i<<": ";
		cin>>n;
		if(n>=20 && n<=80){
			dentroRango ++;
		}else{
			fueraRango ++;
		}
	}
	
	cout<<"\nResultados\n";
	cout<<"Numeros ingresados dentro del rango (20-80): "<<dentroRango<<endl;
	cout<<"Numeros ingresados fuera del rango (20-80): "<<fueraRango<<endl;
	
	return 0;
}
