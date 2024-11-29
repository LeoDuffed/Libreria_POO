#include "Ticket.h"
#include <iostream>
using namespace std;

Ticket :: Ticket(){
    nombre = "";
    dia = 0;
    mes = 0;
    anio = 0;
}

Ticket :: Ticket(std :: string nombre, int dia, int mes, int anio){
    this -> nombre = nombre;
    this -> dia = dia;
    this -> mes = mes;
    this -> anio = anio;
}

void Ticket :: setNombre(std :: string nombre){
    this -> nombre = nombre;
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

std :: string Ticket :: getNombre(){
    return nombre;
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

