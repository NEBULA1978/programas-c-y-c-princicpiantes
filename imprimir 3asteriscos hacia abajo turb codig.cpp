#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int i = 1, N;//contadorle asignamos a i el valor de 1
	
	cout<<i <<"Introduce el valor de N; ";
	cin>>N;
	
	while(i <= N){
		cout<<N <<"*"<<"\n";
		i = i + 1;
	}
	
	
	
	return 0;
}
