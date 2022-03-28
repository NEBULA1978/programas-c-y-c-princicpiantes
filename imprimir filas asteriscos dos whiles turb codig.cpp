#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	int i = 1, j, N, M;//contadorle asignamos a i el valor de 1
	
	cout<<i <<"Introduce el valor de N; ";
	cin>>N;
	M=N;
	
	while(i <= N){
		j=1;
		while(j <= M){
			cout<<"*";
			j = j + 1;
		}
		M=M-1;
		cout<<"\n";
		i=i+1;
	}   
	
	
	
	return 0;
}
