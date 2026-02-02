#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Ingrese un numero entero (10-50): ";
	cin>>n;
	if(n>=10 && n<=50){
		cout<<"El valor "<<n<<" esta dentro del rango."<<endl;
	}else{
		cout<<"El valor ingresado esta fuera del rango."<<endl;
	}
	return 0;
}
