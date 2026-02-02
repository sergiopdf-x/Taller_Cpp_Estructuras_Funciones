#include <iostream>
using namespace std;

int main(){
    double notas[10], suma=0, maximo, minimo;
    int aprueba=0, reprueba=0;

    for(int i=0;i<10;i++){
    	cout<<"Notas "<<i+1<<": ";
        cin>>notas[i];
        suma+=notas[i];
        if(i==0){
			maximo=minimo=notas[i];
		}else{
            if(notas[i]>maximo) maximo=notas[i];
            if(notas[i]<minimo) minimo=notas[i];
        }
        if(notas[i]>=7) aprueba++;
        else reprueba++;
    }

    cout<<"Prom: "<<suma/10<<endl;
    cout<<"Max: "<<maximo<<" Min: "<<minimo<<endl;
    cout<<"Aprobados: "<<aprueba<<" Reprobados: "<<reprueba<<endl;
}
