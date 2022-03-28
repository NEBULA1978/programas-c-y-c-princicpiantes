//tipos de datos en c

#include<stdio.h>//libreria

int main(){
	char a = 'e';//tamaño= 1byte Rango: 0..255
	short b = -15;//tamaño=2bytes rango:-128...127
	int c = 1024;//tamaño = 2bytes rango: -32768..32767
	unsigned int d = 128;//tamaño: 2bytes Rango: 0..65535
	long e = 123456;//tamaño= 4bytes rango -2147483648..2147483637
	float f = 15.678;//tamaño 4bytes
	double m = 123123.123123;//tamaño 8bytes
	
	printf("El elemnto es: %1f",m);
	printf("El elemnto es: %.1f",f);
	return 0;
}
