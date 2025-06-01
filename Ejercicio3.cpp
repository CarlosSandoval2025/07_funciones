#include <iostream>
using namespace std; 
int NumPrimo(int P);
int main(){
	int Num;
	cout<<"Ingrese un numero: ";
	cin>>Num; 
	int Con=NumPrimo(Num);
	if(Con==2){
		cout<<"El Numero "<<Num<<" Es un Numero Primo";
	}
	else{
		cout<<"El Numero "<<Num<<" No es un Numero Primo";
	}
	return 0; 
}
int NumPrimo(int P){
	int i,Con;
	Con=0;
	for( int i=1;i<=P;i++){
		if(P%i==0){
			Con=Con+1; 
		}
	}
	return Con; 
}
