#include <iostream>
using namespace std;

int main(){
	int n;
	int positivo = 0, negativo = 0, cero = 0;
	for(int i=1;i<=10;i++){
		cout<<"Numero "<<i<<" : ";
		cin>>n;
		if(n > 0){
			positivo ++;
		}else if(n < 0){
			negativo ++;
		}else{
			cero ++;
		}
	}
	cout<<"\nResultados\n";
	cout<<"Se ingreso "<<positivo<<" numeros positivos."<<endl;
	cout<<"Se ingreso "<<negativo<<" numeros negativos."<<endl;
	cout<<"Se ingreso "<<cero<<" numeros iguales a ceros."<<endl;
	
	return 0;
}
