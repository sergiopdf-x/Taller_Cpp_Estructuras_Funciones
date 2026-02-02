#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    vector<Cliente> v;
    Cliente c;
    int n;
    ofstream file("clientes.txt");

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c.nombre>>c.edad;
        v.push_back(c);
        file<<c.nombre<<" "<<c.edad<<endl;
    }
    
    file.close();

    string buscar;
    cin>>buscar;
    
    for(auto x:v){
        if(x.nombre==buscar){
            cout<<x.edad<<endl;
        }
    }
    return 0;
}
