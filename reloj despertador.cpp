#include<windows.h>
#include<iostream>
using namespace std;
#define seg 1000 // 1seg=1000 (1000)
#define min 60*seg // 1min=60*seg (60000)
#define hora 60*min // 1hora=60*min (3600000)
main(){
double horas,mins,segs; // Uso la función double para que acepte decimales.
cout << "\n\n Alarma V1.00 - By JuaN";
cout << "\n\nCuando desea que suene la alarma?";
cout << "\n Dentro de:\n";
cout << "Horas: ";
cin >> horas; // Recoge las horas que el programa esperará para hacer sonar la alarma
cout << "Minutos: ";
cin >> mins; // Recoge los minutos que el programa esperará para hacer sonar la alarma
cout << "Segundos: ";
cin >> segs; // Recoge los segundos que el programa esperará para hacer sonar la alarma
horas*=hora; // horas = horas * hora (Las horas que esperará el programa para hacer sonar la alarma = Las horas introducidas * 1 hora(60*min)
mins*=min; // mins = mins * min (Lo mismo pero en minutos)
segs*=seg; // segs = segs * seg (Lo mismo pero en segundos)
Sleep(horas+mins+segs); // Suma el valor de las variables, anteriormente recogidas con cin
cout << "\nYa es la hora, despiertaaaa!!!!";
while(1){ //Bucle infinito
Beep(2500,seg/10); //2500 es la frecuencia del pitido, y seg/10 (0.1seg) la duración
Sleep(seg);
Beep(2500,seg/10);
Sleep(seg/10);
Beep(2500,seg/10);
Sleep(seg/10);
Beep(2500,seg/10);
Sleep(seg/10);
Beep(2500,seg/10);
Sleep(seg/10);
Beep(2500,seg/10);
Sleep(2*seg);
}
}

