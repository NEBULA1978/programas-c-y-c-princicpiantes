//3. escribir expresion c++

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"Digite un valor de a: "; cin>>a;
	cout<<"Digite un valor de b: "; cin>>b;
	cout<<"Digite un valor de c: "; cin>>c;
	cout<<"Digite un valor de d: "; cin>>d;
	cout<<"Digite un valor de e: "; cin>>e;
	cout<<"Digite un valor de f: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	cout.precision(2);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
