#include <iostream>
using namespace std;

int main(){
    int par = 0, impar = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            par += i;
        }else{
            impar += i;
        }
    }

    cout<<"\nResultados\n";
    cout<<"La suma de los numeros pares es: "<<par<<endl;
    cout<<"La suma de los numeros impares es: "<<impar<<endl;

    if(par > impar){
        cout<<"La suma de los numeros pares es mayor."<<endl;
    }else if(impar > par){
        cout<<"La suma de los numeros impares es mayor."<<endl;
    }else{
        cout<<"Ambas sumas son iguales."<<endl;
    }

    return 0;
}
