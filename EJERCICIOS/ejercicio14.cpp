#include <iostream>
using namespace std;

int main(){
	int notas[10];
	int suma = 0;
	float promedio = 0;
	int aprobados = 0, reprobados = 0;
	for(int i=0;i<10;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>notas[i];
		
		suma += notas[i];
		
		if(notas[i] >=7){
			aprobados ++;
		}else{
			reprobados ++;
		}
	}
	promedio = suma / 10.0;
	cout<<"\nResultados\n";
	cout<<"Promedio general: "<<promedio<<endl;
	cout<<"Estudiantes aprobados: "<<aprobados<<endl;
	cout<<"Estudiantes reprobados: "<<reprobados<<endl;
	
	return 0;
}
