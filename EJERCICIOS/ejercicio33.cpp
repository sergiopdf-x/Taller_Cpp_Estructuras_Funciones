#include <iostream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    Cliente c[3];

    for(int i=0;i<3;i++){
    	cout<<"Nombre :";
        getline(cin,c[i].nombre);
        cout<<"Edad: ";
        cin>>c[i].edad;
        cin.ignore();
    }
    
    for(int i=0;i<3;i++){
        if(c[i].edad>=18){
            cout<<"Nombre: "<<c[i].nombre<<"| Edad: "<<c[i].edad<<endl;
        }
    }
    return 0;
}
