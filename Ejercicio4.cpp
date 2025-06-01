#include <iostream>
using namespace std; 
int NumPerfecto(int Per);
int main(){
	int Num; 
	
	cout<<"Ingrese un Numero: ";
	cin>>Num; 
	
	int Sum=NumPerfecto(Num);
	
	cout<<"La suma es: "<<Sum<<endl; 
	
	if(Sum==Num){
		cout<<"Es un numero Perfecto";
	}
	else{
		cout<<"No es un numero Perfecto";
	}
	
	return 0; 
}
int NumPerfecto(int Per){
	
	int i,Sum;
	Sum=0; 
	
	for(i=1;i<Per;i++){
		if(Per%i==0){
			cout<<i<<" "<<endl; 
			Sum=Sum+i;
		}
	}

	return Sum;
}

