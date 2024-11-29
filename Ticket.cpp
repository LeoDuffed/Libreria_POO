#include "Ticket.h"
#include "Libros.h"
#include <iostream>
using namespace std;

Ticket :: Ticket(){
    nombre = "";
    nombreLibro = "";
    dia = 0;
    mes = 0;
    anio = 0;
    cantidadTomada = 0;
}

Ticket :: Ticket(std :: string nombre,std :: string nombreLibro, int dia, int mes, int anio, int cantidadTomada){
    this -> nombre = nombre;
    this -> nombreLibro = nombreLibro;
    this -> dia = dia;
    this -> mes = mes;
    this -> anio = anio;
    this -> cantidadTomada = cantidadTomada;
}

void Ticket :: setNombre(std :: string nombre){
    this -> nombre = nombre;
}

void Ticket :: setNombreLibro(std :: string nombreLibro){
    this -> nombreLibro = nombreLibro;
}

void Ticket :: setDia(int dia){
    this -> dia = dia;
}

void Ticket :: setMes(int mes){
    this -> mes = mes;
}

void Ticket :: setAnio(int anio){
    this -> anio = anio;
}

void Ticket :: setCantidadTomada(int cantidadTomada){
    this -> cantidadTomada = cantidadTomada;
}

std :: string Ticket :: getNombre(){
    return nombre;
}
std :: string Ticket :: getNombreLibro(){
    return nombreLibro;
}
int Ticket :: getDia(){
    return dia;
}
int Ticket :: getMes(){
    return mes;
}
int Ticket :: getAnio(){
    return anio;
}
int Ticket :: getCantidadTomada(){
    return cantidadTomada;
}

void Ticket :: calcularFechaDev(){
    dia += 7;
    if (dia > 30){
        dia  -= 30;
        mes ++;
        if (mes > 12){
            mes = 1;
            anio++;
        }
    } 
}

void Ticket::mostrarTicket() {
    cout << "\n-----------------------------------\n";
    cout << "Ticket de préstamo:\n";
    cout << "Libros prestado: ";
    cout << "Nombre del usuario: " << nombre << endl;
    cout << "Fecha del préstamo: " << dia << "/" << mes << "/" << anio << endl;
    calcularFechaDev();
    cout << "Fecha de devolución: " << dia << "/" << mes << "/" << anio << endl;
    cout << "-----------------------------------\n";
}