#include <iostream>
#include <vector>
using namespace std;

void llenar(vector<int>& v){
    int n;
    for(int i=0;i<10;i++){
    	cout<<"Numero: "<<i+1<<": ";
        cin>>n;
        v.push_back(n);
    }
}

void calcular(const vector<int>& v,int &s,double &p,int &may,int &men){
    s=0; may=v[0]; men=v[0];
    for(int x:v){
        s+=x;
        if(x>may) may=x;
        if(x<men) men=x;
    }
    p=s/(double)v.size();
}

int main(){
    vector<int> v;
    int suma,may,men;
    double prom;

    llenar(v);
    calcular(v,suma,prom,may,men);

    cout<<"Suma: "<<suma<<" |Promedio: "<<prom<<" |Mayor: "<<may<<" |Menor: "<<men<<endl;
    return 0;
}
