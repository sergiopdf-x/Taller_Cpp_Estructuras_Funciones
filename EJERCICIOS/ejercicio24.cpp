#include <iostream>
using namespace std;

int main(){
    double sueldos[10], suma=0;

    for(int i=0;i<10;i++){
    	cout<<"Sueldo "<<i+1<<": ";
        cin>>sueldos[i];
        suma+=sueldos[i];
    }

    double prom=suma/10;
    int arriba=0, abajo=0;

    for(int i=0;i<10;i++){
        if(sueldos[i]>prom) {
			arriba++;
		}else {
			abajo++;
		}
    }
    cout<<"\nResultados\n";
    cout<<"Sueldo promedio: "<<prom<<endl;
    cout<<"Sueldos encima del promedio: "<<arriba<<endl;
    cout<<"Sueldos debajo del promedio: "<<abajo<<endl;
}
