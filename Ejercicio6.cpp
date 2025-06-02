#include <iostream>
using namespace std;
int mcd(int Val1,int Val2);
int mcm(int val1,int Val2); 
int main(){
	int Num1, Num2; 
	cout<<"Ingrese un Numero: ";
	cin>>Num1;
	cout<<"Ingrese otro Numero: "; 
	cin>>Num2; 
	int MCD=mcd(Num1,Num2);
	cout<<"El MCD es: "<<MCD<<endl;
	int MCM=mcm(Num1,Num2); 
	cout<<"El MCM es: "<<MCM; 
}
int mcd(int Val1,int Val2){
	int Mcd;
	for(int i=1;Val2!=0;i++){
		Mcd=Val1%Val2; 
		Val1=Val2;
		Val2=Mcd;
	 
	}
	return Val1; 
}
int mcm(int Val1,int Val2){
	int Mcm; 
	Mcm=(Val1*Val2)/mcd(Val1,Val2);
	return Mcm; 
}

