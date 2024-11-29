#include "Libros.h"
#include <iostream> 
using namespace std;

int main(){

    Libros librosArray[15] = {
        Libros ("Cien Años de Soledad", "Gabriel García Márquez", 10),
        Libros ("Don Quijote de la Mancha", "Miguel de Cervantes", 7),
        Libros ("1984", "George Orwell", 15),
        Libros ("El Principito", "Antoine de Saint-Exupéry", 20),
        Libros ("Matar a un ruiseñor", "Harper Lee", 12),
        Libros ("Orgullo y Prejuicio", "Jane Austen", 8),
        Libros ("La Metamorfosis", "Franz Kafka", 5),
        Libros ("Crimen y Castigo", "Fiódor Dostoyevski", 12),
        Libros ("El Gran Gatsby", "F. Scott Fitzgerald", 14),
        Libros ("En busca del tiempo perdido", "Marcel Proust", 6),
        Libros ("Rayuela", "Julio Cortázar", 10),
        Libros ("Ulises", "James Joyce", 4),
        Libros ("Los Miserables", "Victor Hugo", 11),
        Libros ("El Hombre Invisible", "H.G. Wells", 9),
        Libros ("El Hobbit", "J.R.R. Tolkien", 18),
        };
     
    int opciones;
    do {

        Libros biblioteca;
        cout << "\n------------------------------------------------\n";
        cout << "\nTodos los libros\n";
        biblioteca.mostrarLibros(librosArray,15);
        cout << "Ingresa 0 para salir: ";
        cout << "\nIngresa el numero del libro que quieras: \n";
        cin >> opciones;
        if (opciones >= 1 && opciones <= 15){
            int accionesLibros;
            cout << "\nEntraste a ver "<< librosArray[opciones -1].getNombreLibro()<< "\n"<< endl;
            cout << "1 = Ver disponibilidad\n2 = Tomar libro\n3 = Devolver libro\n0 = Salir\n";
            cout << "Ingrese su eleccion: ";
            cin >> accionesLibros;

            if (accionesLibros == 1){
                librosArray[opciones-1].mostrarDisponibilidad();
            } else if (accionesLibros == 2){
                librosArray[opciones-1].tomarLibro();
            } else if (accionesLibros == 3){
                librosArray[opciones - 1].devolberLibro();
            } else if (accionesLibros == 0){
                cout << "\nSaliendo al menu \n";
            } else {
                cout << "\nOpcion invalida\n";
            }
        } else if(opciones == 0){
            cout << "\nSaliendo...\n";
        } else {
            cout << "\nOpcion invalida\n";
        }
       
    }while (opciones != 0);

    return 0;







}