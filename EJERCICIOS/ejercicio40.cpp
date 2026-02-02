#include <iostream>
using namespace std;

void analizar(int v[],int n){
    int may=v[0], men=v[0], pos=0, neg=0, cero=0;

    for(int i=0;i<n;i++){
        if(v[i]>may) may=v[i];
        if(v[i]<men) men=v[i];
        if(v[i]>0) pos++;
        else if(v[i]<0) neg++;
        else cero++;
    }

    cout<<"Mayor: "<<may<<"| Menor: "<<men<<"| Positivo: "<<pos<<" |Negativo: "<<neg<<"| Cero: "<<cero<<endl;
}

int main(){
    int v[6]={1,-2,0,4,-5,6};
    analizar(v,6);
    return 0;
}
