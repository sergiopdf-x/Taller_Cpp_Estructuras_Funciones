#include <iostream>
using namespace std;

void llenar(double v[],int n){
    for(int i=0;i<n;i++){
		cin>>v[i];
    }
}

int main(){
    double v[5], total=0;
    llenar(v,5);

    for(int i=0;i<5;i++) total+=v[i];
    double prom=total/5;
    int cont=0;

    for(int i=0;i<5;i++)
        if(v[i]>prom) cont++;

    cout<<"Total: "<<total<<"| Promedio "<<prom<<"| Cont: "<<cont<<endl;
    return 0;
}
