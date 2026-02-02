#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante{
    string nombre;
    double n1,n2,n3;
};

int main(){
    ofstream file("notas.txt");
    Estudiante e;
    int n;
	cout<<"Cuantas notas desea ingresar: ";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>e.nombre>>e.n1>>e.n2>>e.n3;
        file<<e.nombre<<" "<<e.n1<<" "<<e.n2<<" "<<e.n3<<endl;
    }
    file.close();

    ifstream in("notas.txt");
    string buscar;
    cin>>buscar;

    while(in>>e.nombre>>e.n1>>e.n2>>e.n3){
        if(e.nombre==buscar){
            double prom=(e.n1+e.n2+e.n3)/3;
            cout<<prom<<endl;
            cout<<(prom>=7?"Aprueba":"Reprueba")<<endl;
        }
    }
    in.close();

    return 0;
}
