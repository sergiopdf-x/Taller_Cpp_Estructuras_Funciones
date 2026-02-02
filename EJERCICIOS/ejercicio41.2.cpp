#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresar(vector<double>& v){
    double x;
    for(int i=0;i<5;i++){
    	cout<<"Venta "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
}

double total(const vector<double>& v){
    double s=0;
    for(double x:v) s+=x;
    return s;
}

int main(){
    vector<double> v;
    ingresar(v);

    ofstream f("ventas.txt");
    for(double x:v) f<<x<<endl;
    f.close();

    ifstream in("ventas.txt");
    vector<double> r;
    double x;
    while(in>>x) r.push_back(x);
    in.close();

    double t=total(r);
    double prom=t/r.size();
    int mayor=0, menor=0;

    for(double y:r){
        if(y>prom) mayor++;
        else menor++;
    }

    cout<<"Total: "<<t<<"| Promedio: "<<prom<<"| Mayor: "<<mayor<<"|Menor: "<<menor<<endl;
    return 0;
}
