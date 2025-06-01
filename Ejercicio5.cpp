#include <iostream>
using namespace std; 
int NumAm1(int Val1);
int NumAm2(int Val2);
int main(){
	int Num1,Num2; 
	cout<<"Ingrese un Numero: ";
	cin>>Num1;
	cout<<"Ingrese otro Numero: ";
	cin>>Num2; 
	
	int Sum1=NumAm1(Num1);
	cout<<endl;
	cout<<"---- Entonces ----"<<endl; 
	cout<<"La suma de los divisores de "<<Num1<<" es: "<<Sum1<<endl;
	
	int Sum2=NumAm2(Num2);
	cout<<endl;
	cout<<"---- Entonces ----"<<endl; 
	cout<<"La suma de los divisores de "<<Num2<<" es: "<<Sum2<<endl;
	
	cout<<"-------- Por lo tanto --------"<<endl; 
	if(Sum1==Num2&&Sum2==Num1){
		cout<<"Son numeros Amigos";
	}
	else{
		cout<<"No son numeros Amigos";
	}
	return 0;
}
int NumAm1(int Val1){
	int i,Sum1; 
	Sum1=0;
	for(int i=1;i<Val1;i++){
		if(Val1%i==0){
			Sum1=Sum1+i;
		}
	}
	return Sum1;
}
int NumAm2(int Val2){
	int i,Sum2;
	Sum2=0;
	for(int i=1;i<Val2;i++){
		if(Val2%i==0){
			Sum2=Sum2+i;
		}
	} 
	return Sum2;
}
