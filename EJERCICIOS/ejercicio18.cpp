#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<int> numeros;
    int n;
    int sumaPositivos = 0, sumaNegativos = 0;
    int valorAbsoluto = 0;

    for(int i = 0; i < 12; i++){
        cout<<"Numero "<<i + 1<<": ";
        cin>>n;
        numeros.push_back(n);

        if(n>0){
            sumaPositivos += n;
        }else if(n < 0){
            sumaNegativos += n;
        }
        valorAbsoluto += abs(n);
    }

    cout<<"\nResultados\n";
    cout<<"Suma de valores positivos: "<<sumaPositivos<<endl;
    cout<<"Suma de valores negativos: "<<sumaNegativos<<endl;
    cout<<"Valor absoluto total acumulado: "<<valorAbsoluto<<endl;

    return 0;
}
