#include <iostream>
using namespace std;

int main(){
	int contador_multiplos = 0;
	int contador_no_multiplo = 0;
	for(int i=1;i<=50;i++){
		if(i % 3 == 0){
			contador_multiplos ++;
		}else{
			contador_no_multiplo ++;
		}
	}
	cout<<"Numeros contados multiplos de 3: "<<contador_multiplos<<endl;
	cout<<"Numeros contados no multiplos de 3: "<<contador_no_multiplo<<endl;
	
	return 0;
}
