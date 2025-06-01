#include <iostream>
using namespace std;

int factorial(int);

int main(){
	int m,n,c;
	cin>>m>>n;
		if(n==0||(m-n)==0){
		cout<<"El factorial no existe ";
	}
	c=factorial(m)/(factorial(n)*factorial(m-n));
	cout<<"La combinatoria es: "<<c<<endl; 
    return 0; 
}
int factorial(int n){
	int f; 
	f=1;
	for (int i=2;i<=n;i++)
		f=f*i;
	return f;
}

