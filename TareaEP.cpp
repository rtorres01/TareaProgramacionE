#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
using namespace std;
void saludar(string nombre){
    cout<<"Hola: "<<nombre<<endl;
}
double sumar(double numero1, double numero2){
    double suma;
    suma = numero1 + numero2;
    return suma;
}
int main()
{
    double numero1,numero2, suma=0;
   /* string nombre;
    setlocale(LC_ALL,"Spanish");
    saludar("Fulano");
    cout<<"Ingrese el nombre: " ;
    getline(cin, nombre);
    //cin >> nombre;
    saludar(nombre);*/
    cout<<"Ingrese el numero 1: ";
    cin>>numero1;
    cout<<"Ingrese el numero 2: ";
    cin>>numero2;
    suma= sumar(numero1,numero2);
    cout<<"la suma es :"<< suma;
    /* string nombre;
    setlocale(LC_ALL,"Spanish");
    saludar("Fulano");
    cout<<"Ingrese el nombre: " ;
    getline(cin, nombre);
    //cin >> nombre;
    saludar(nombre);*/
    /* string nombre;
    setlocale(LC_ALL,"Spanish");
    saludar("Fulano");
    cout<<"Ingrese el nombre: " ;
    getline(cin, nombre);
    //cin >> nombre;
    saludar(nombre);*/
    /* string nombre;
    setlocale(LC_ALL,"Spanish");
    saludar("Fulano");
    cout<<"Ingrese el nombre: " ;
    getline(cin, nombre);
    //cin >> nombre;
    saludar(nombre);*/

    return 0;
}