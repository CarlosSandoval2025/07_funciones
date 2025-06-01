#include <iostream>
using namespace std;
int fibonacci(int Num);
int main(){
	int Num;
	cout<<"Ingrese la cantidad de terminos: ";
	cin>>Num;
	cout<<"--------Entonces--------"<<endl;
	int sum = fibonacci(Num);
    cout<<"La suma es: "<<sum<<endl;
	return 0;
}
int fibonacci(int Num){
	int t1,t2,fi,i,sum;
	t1=0;
	t2=1;
	fi=0;
	sum=0;
	cout<<"La serie Fibonacci generada es: "<<endl;
	for(int i=1;i<=Num;i++){
		cout<<t1<<endl; 
		sum=sum+t1;
		fi=t1+t2;
		t1=t2;
		t2=fi; 
	}
	return sum;
}

