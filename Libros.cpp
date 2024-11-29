#include "Libros.h"
#include <iostream>
#include "Ticket.h"
using namespace std;

Libros :: Libros(){
    nombreLibro = "";
    nombreAutor = "";
    cantidadDisponible = 0;
}

Libros :: Libros (std :: string nombreLibro, std :: string nombreAutor, int cantidadDisponible){
    this -> nombreLibro = nombreLibro;
    this -> nombreAutor = nombreAutor;
    this -> cantidadDisponible = cantidadDisponible;
}

void Libros :: setNombreLibro(std :: string nombreLibro){
    this -> nombreLibro = nombreLibro;
}
void Libros :: setNombreAutor(std :: string nombreAutor){
    this -> nombreAutor = nombreAutor;
}
void Libros :: setCantidadDiponible(int cantidadDisponible){
    this -> cantidadDisponible = cantidadDisponible;
}

std :: string Libros :: getNombreLibro(){
    return nombreLibro;
}
std :: string Libros :: getNombreAutor(){
    return nombreAutor;
}
int Libros :: getCantidadDisponible(){
    return cantidadDisponible;
}
void Libros :: mostrarLibros(Libros librosArray[], int size){
    for (int i = 0; i < size; i++){
        cout << i+1 << ".  Libro: "<< librosArray[i].getNombreLibro()<<" ,Autor: "<<librosArray[i].getNombreAutor()<< endl;

    }
}
void Libros :: mostrarDisponibilidad(){
    if (getCantidadDisponible()!= 0){
        cout << "\nQuedan "<< getCantidadDisponible() << " del libro "<< getNombreLibro()<< "\n" << endl;
    } else {
        cout << "\nNo queda mas libros disponibles de "<< getNombreLibro()<< "\n"<<endl;
    }

}
void Libros :: tomarLibro(){
    if (cantidadDisponible > 0){

        int librosPrestados;

        cout << "\nSi hay disponibilidad del libro "<< getNombreLibro () << "!!!!" << endl;
        std :: string nombreUsuario;
        int dia, mes, anio;

        cout << "\nCuantos libros deseas tomar?: ";
        cin >> librosPrestados;

        cout << "\nIngrese su nombre completo:";
        cin.ignore();
        getline(cin, nombreUsuario);

        cout << "\nHas tomado prestado "<< librosPrestados<< " de " << getNombreLibro()<<"\n"<< endl;

        cantidadDisponible = getCantidadDisponible() - librosPrestados;

        cout << "\nIngrese la fecha de hoy (dia/mes/año): ";
        cin >> dia >> mes >> anio;        

        cout << "\nSe imprimira su ticket\n";

        Ticket ticket (nombreUsuario, dia, mes, anio);
        ticket.mostrarTicket();


    } else {
        cout << "Lo sentimos, no hay mas libros de "<< getNombreLibro()<< " disponibles "<< endl;
    }

}


void Libros :: devolberLibro(){
    int libriosDuevueltos;
    cout << "Has ingresado a devolver "<< getNombreLibro() << endl;
    cout << "cuantos libros deseas regresar?: ";
    cin >> libriosDuevueltos;
    cantidadDisponible = getCantidadDisponible() + libriosDuevueltos;
    cout << "Has regresado "<< libriosDuevueltos<<endl;

}