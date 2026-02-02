#include <iostream>
using namespace std;

int main(){
	int n,suma=0;
	cout<<"Ingrese un numero positivo: ";
	cin>>n;
	for(int i=1;i<=10;i++){
		int resultado = i*n;
		cout<<n<<" x "<<i<<" = "<<resultado<<endl;
		suma += resultado;
	}
	cout<<"\nLa suma de los resultados es: "<<suma<<endl;
	return 0;
}
