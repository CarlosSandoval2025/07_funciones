#include <iostream>
using namespace std; 
void resta(int val1,int val2);
int producto(int val1,int val2);
int suma(int val1,int val2);
void divicion(float val1,float val2);
int main(){
    int Num1,Num2,resultado; 
    cout<<"Ingrese el primer numero: ";
    cin>>Num1; 
    cout<<"Ingrese el segundo numero: ";
    cin>>Num2; 
    
    resta(Num1,Num2);
    cout<<endl; 
    resta(Num2,Num1);
    cout<<endl; 
    
    resultado=producto(Num1,Num2);
    cout<<"La multiplicacion de "<<Num1<<" por "<<Num2<<" es: "<<resultado<<endl; 
    
    int Sum=suma(Num1,Num2);
    cout<<"La suma de "<<Num1<<" + "<<Num2<<" es:"<<Sum<<endl; 
    
    divicion(Num1,Num2); 
    
    return 0; 
}
void resta(int val1,int val2){
    int sustrac;
    sustrac=val1-val2;
    cout<<"La resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
}
int producto(int val1,int val2){
    int prod; 
    prod= val1*val2; 
    return prod; 
}
int suma(int val1,int val2){
    int sum;
    sum=val1+val2; 
    return sum; 
}
void divicion(float val1,float val2){
    float Div;
    if(val2!=0){
        Div=val1/val2; 
        cout<<"La divicion de "<<val1<<" / "<<val2<<" es: "<<Div; 
    }
    else{
        cout<<"La divicion de "<<val1<<" / "<<val2<<" es: "<<endl;
        cout<<"Erronea";
    }
    
}
