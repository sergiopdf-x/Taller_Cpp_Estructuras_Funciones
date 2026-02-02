#include <iostream>
#include <vector>
using namespace std;

int suma(vector<int> v){
    int s=0;
    for(int x:v) s+=x;
    return s;
}

int main(){
    vector<int> v={1,2,3,4,5};
    int pares=0, impares=0;

    for(int x:v){
        if(x%2==0) pares++;
        else impares++;
    }

    cout<<suma(v)<<" "<<pares<<" "<<impares<<endl;
    return 0;
}
