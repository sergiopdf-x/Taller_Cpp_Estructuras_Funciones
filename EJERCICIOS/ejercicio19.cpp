#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> edades;
    int n, suma=0, mayores=0, menoresIgual=0;

    for(int i=0;i<10;i++){
        cin>>n;
        edades.push_back(n);
        suma+=n;
    }
    double prom = suma/10.0;

    for(int e: edades){
        if(e>prom){ 
		mayores++;
		}else{
			menoresIgual++;
		}
    }

    cout<<"Promedio: "<<prom<<endl;
    cout<<"Mayores al promedio: "<<mayores<<endl;
    cout<<"Menores o iguales: "<<menoresIgual<<endl;
    
    return 0;
}
