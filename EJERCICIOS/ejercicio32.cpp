#include <iostream>
#include <vector>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    vector<Cliente> clientes;
    Cliente c;
    int n;

    cout<<"Cantidad de clientes: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>c.nombre>>c.edad;
        clientes.push_back(c);
    }

    for(auto x : clientes)
        cout<<x.nombre<<" "<<x.edad<<endl;

    return 0;
}
