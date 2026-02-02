#include <iostream>
using namespace std;

int main(){
    double precio[10], subtotal=0;

    for(int i=0;i<10;i++){
    	cout<<"Precio "<<i+1<<": ";
        cin>>precio[i];
        subtotal+=precio[i];
    }

    double iva=subtotal*0.12;
    cout<<"Subtotal: "<<subtotal<<endl;
    cout<<"IVA: "<<iva<<endl;
    cout<<"Total: "<<subtotal+iva<<endl;
}
