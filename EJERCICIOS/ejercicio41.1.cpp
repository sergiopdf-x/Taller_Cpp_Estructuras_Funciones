#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresar(vector<double>& v){
    double n;
    for(int i=0;i<5;i++){
    	cout<<"Nota "<<i+1<<": ";
        cin>>n;
        v.push_back(n);
    }
}

int main(){
    vector<double> v;
    ingresar(v);

    ofstream f("calificaciones.txt");
    for(double x:v) f<<x<<endl;
    f.close();

    ifstream in("calificaciones.txt");
    vector<double> r;
    double x,total=0;
    while(in>>x){
        r.push_back(x);
        total+=x;
    }
    in.close();

    double prom=total/r.size();
    int arriba=0, abajo=0;

    for(double y:r){
        if(y>prom) arriba++;
        else abajo++;
    }

    cout<<"Total: "<<total<<"| Promedio"<<prom<<" | Arriba del promedio: "<<arriba<<"| Abajo del promedio: "<<abajo<<endl;
    return 0;
}
