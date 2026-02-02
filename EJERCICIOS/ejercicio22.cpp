#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n, multiplo3=0,multiplo5=0,multiplo3_y_5=0;

    for(int i=0;i<15;i++){
    	cout<<"Numero "<<i+1<<": ";
        cin>>n;
        v.push_back(n);
        if(n%3==0) multiplo3++;
        if(n%5==0) multiplo5++;
        if(n%3==0 && n%5==0) multiplo3_y_5++;
    }

	cout<<"\nResultados\n";
    cout<<"Valores multiplo de 3: "<<multiplo3<<endl;
    cout<<"Valores multiplo de 5: "<<multiplo5<<endl;
    cout<<"Valores multiplos de 3 y 5: "<<multiplo3_y_5<<endl;
}
