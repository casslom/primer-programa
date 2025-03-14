#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main() {
	int respuesta,C, F, K;
	float celsius, firenheat, kelvin;
	cout<<"\t\t\t\t*** De celsius a firenheat y kelvin ***\t\t\n\n";
	cout<<"Hola bienvenido a este programa"<<endl;
	string usuario_correcto = "cass";
    cout << "Ingrese su nombre de usuario: ";
    string usuario_ingresado;
    cin >> usuario_ingresado;
    if (usuario_ingresado == usuario_correcto) {
        cout << "Acceso concedido. Bienvenido, " << usuario_ingresado<< endl;
        	cout<<"En este menu veremos como convertir grados celsiuos a firenheat y kelvin"<<endl;
    cout<<"Empezaremos con celsius, se converiran a firenheat y kelvin"<<endl;
    cout<<"Ingresa tus grados celsius"<<endl;
    cin>>C;
    kelvin= C+298.15;
    cout<<"El valor de celsius a kelvin son:"<<kelvin<<endl;
    cout<<"Ingresa tus grados celsius"<<endl;
    cin>>C;
    firenheat= (C*9/5)+32;
    cout<<"El valor de celsius a firenheat son:"<<firenheat<<endl;
    cout<<"Desea continuar? seleccione 1 para si o 2 para no"<<endl;
    cin>>respuesta;
	if (respuesta == 1){
		cout<<"Continuaremos con grados kelvin"<<endl;
		cout<<"Introduce tus grados kelvin:"<<endl;
		cin>>K;
    celsius= K-273.15;
	cout<<"El valor de kelvin a celsius son:"<<celsius<<endl;	
		cout<<"Ingresa tus grados kelvin"<<endl;
    cin>>K;
    firenheat= (K-273.15)*9/5+32;
    cout<<"El valor de kelvin a firenheat son:"<<firenheat<<endl;
	cout<<"Desea continuar? seleccione 1 para si o 2 para no"<<endl;
    cin>>respuesta;
	if (respuesta == 1){	
		cout<<"Entonces continuaremos con grados firenheat, aqui tendremos que despejar"<<endl;
		cout<<"Introduce tus grados firenheat:"<<endl;
		cin>>F;
    celsius= (F-32)*5/9;
	cout<<"el valor de firenheat a celsius son:"<<celsius<<endl;	
	cout<<"ingresa el resultado pasado:"<<endl;
    cin>>F;
    kelvin= F+273.15;
    cout<<"El valor de firenheat y celsius a kelvin son:"<<kelvin<<endl;
	}}else if (respuesta == 2){
		cout<<"Entonces Hasta Luego :)"<<endl;
	} else {
        cout << "Opcion no valida. Por favor, ingrese 1 para si o 2 para no" <<endl;
    }
    } else {
        cout << "Nombre de usuario incorrecto." << endl;
    }
	return 0;
}
