//escribe la siguiente expresion en c++:

#include<iostream>

using namespace std;

int main(){
	float a,b, resultado = 0;
	
	cout<<"Digite un valor de a: "; cin>>a;
	cout<<"Digite un valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
