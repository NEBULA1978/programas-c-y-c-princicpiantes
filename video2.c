//directivas del procesador y variables

#include<stdio.h>//libreria

#define PI 3.1416//macro

int y = 5;//varable global
int main(){
	int x = 10;//variable local
	
	float suma = 0;
	
	suma = PI + x;
	printf("La suma es: %.2f",suma);//.2f 2 decimales
	
	return 0;
}
