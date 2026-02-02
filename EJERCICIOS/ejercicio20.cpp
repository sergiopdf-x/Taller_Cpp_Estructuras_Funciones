#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n, sumaCuadrado=0;

    for(int i=0;i<10;i++){
    	cout<<"Numero "<<i+1<<": ";
        cin>>n;
        v.push_back(n);
        sumaCuadrado += n*n;
    }

    cout<<"Suma cuadrados: "<<sumaCuadrado<<endl;
    cout<<"Promedio cuadrados: "<<sumaCuadrado/10.0<<endl;
}
