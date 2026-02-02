#include <iostream>
using namespace std;

int main(){
    int m[4][4];
    int positivo=0, negativo=0, cero=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>m[i][j];
            if(m[i][j]>0){
				positivo++;
			}else if(m[i][j]<0){ 
				negativo++;
			}else {
				cero++;
			}
        }
    }
    cout<<"Positivos: "<<positivo<<endl;
    cout<<"Negativos: "<<negativo<<endl;
    cout<<"Ceros: "<<cero<<endl;

    return 0;
}
