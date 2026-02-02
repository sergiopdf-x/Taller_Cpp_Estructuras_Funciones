#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese un numero entero: ";
	cin>>n;
	if(n < 10 || n > 50){
		cout<<"El numero No esta en el rango 10-50."<<endl;
	}else{
		cout<<"El numero esta dentro del rango de 10-50."<<endl;
	}
	
	return 0;
}
