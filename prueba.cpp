/* run this program using the console pauser or add your own getch, system("pause") or input loop */ int menu(); using namespace std;

class User{ char name; int age; float weight; public: User(char,int,float); void printInfo(); User(); void setValues(char,int,float); };

User::User(char nombre, int edad, float peso){ name=nombre; age=edad; weight=peso; }

void User::printInfo(){
 cout<<"Nombre: "<

User::User(){ } User usuarios[MAX_USER]; int usuarios_creados = 0; char nombreC; int edadC; float pesoC;

int main(int argc, char** argv) { int res = 0; while (res < 3){ res = menu(); if (res == 1 ){ cout << "Digite nombre: " << endl; cin >> nombreC; cout << "Digite edad: " << endl; cin >> edadC; cout << "Digite peso: " << endl; cin >> pesoC; usuarios[usuarios_creados].setValues(nombreC, edadC, pesoC); usuarios_creados++;

} else if (res == 2 ){ for(int i = 0; i < usuarios_creados; i++) { usuarios*.printInfo();* } } } return 0; } void User::setValues(char nombre,int edad,float peso){ name=nombre; age=edad; weight=peso; } int menu(){ int resultado; cout<<" MENU PRINCIPAL "< cout<<"(1) CREAR"< cout<<"(2) MOSTRAR"< cin>>resultado; return resultado; }
