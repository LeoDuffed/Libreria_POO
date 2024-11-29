#include "Libros.h"
#include <iostream>
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
    int librosPrestados;
    if (getCantidadDisponible() != 0){
        cout << "\nSi hay disponibilidad del libro "<< getNombreLibro () << "!!!!" << endl;
        cout << "Cuantos libros deseas tomar?: ";
        cin >> librosPrestados;
        cantidadDisponible = getCantidadDisponible() - librosPrestados;
        cout << "Has tomado prestado "<< librosPrestados<< " de " << getNombreLibro()<<"\n"<< endl;
        cout << "Tienes 7 dias para debolverlos, gracias\n";

    } else {
        cout << "\nLo sentimos, ya no hay libros disponibles de "<< getNombreLibro() << "\n"<< endl;
    }

}