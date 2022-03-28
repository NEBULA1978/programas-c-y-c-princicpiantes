//la sentencia switch

#include<iostream>
//codicionales multiples
using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero entre 1-10: ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Es el numero 1"; break;
		case 2: cout<<"Es el numero 2"; break;
		case 3: cout<<"Es el numero 3"; break;
		case 4: cout<<"Es el numero 4"; break;
		case 5: cout<<"Es el numero 5"; break;
		case 6: cout<<"Es el numero 6"; break;
		case 7: cout<<"Es el numero 7"; break;
		case 8: cout<<"Es el numero 8"; break;
		case 9: cout<<"Es el numero 9"; break;
		case 10: cout<<"Es el numero 10"; break;
		defaul: cout<<"No esta en el rango de 1-10";break;
	}
	
	
	return 0;
}
