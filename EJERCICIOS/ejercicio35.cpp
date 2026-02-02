#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
    double consumo;
};

int main(){
    vector<Cliente> v;
    Cliente c;
    int n;
    ofstream file("consumo.txt");
	cout<<"Ingrese cuantos consumos: ";
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>c.nombre>>c.edad>>c.consumo;
        v.push_back(c);
        file<<c.nombre<<" "<<c.edad<<" "<<c.consumo<<endl;
    }
    file.close();

    double total=0;
    Cliente mayor=v[0];

    for(auto x:v){
        total+=x.consumo;
        if(x.consumo>mayor.consumo) mayor=x;
    }

    cout<<"Total: "<<total<<endl;
    cout<<"Promedio: "<<total/v.size()<<endl;
    cout<<"Mayor consumo: "<<mayor.nombre<<endl;

    return 0;
}
