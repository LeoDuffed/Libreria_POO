#include "Libros.h"
#include <iostream> 
using namespace std;

int main(){

Libros librosArray[40] = {
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
    Libros ("Fahrenheit 451", "Ray Bradbury", 7),
    Libros ("La Odisea", "Homero", 13),
    Libros ("Las Mil y Una Noches", "Anónimo", 8),
    Libros ("El Aleph", "Jorge Luis Borges", 10),
    Libros ("La Divina Comedia", "Dante Alighieri", 6),
    Libros ("Madame Bovary", "Gustave Flaubert", 9),
    Libros ("Drácula", "Bram Stoker", 10),
    Libros ("El Retrato de Dorian Gray", "Oscar Wilde", 8),
    Libros ("El Nombre de la Rosa", "Umberto Eco", 5),
    Libros ("Alicia en el País de las Maravillas", "Lewis Carroll", 15),
    Libros ("El Señor de los Anillos", "J.R.R. Tolkien", 20),
    Libros ("La Casa de los Espíritus", "Isabel Allende", 10),
    Libros ("Pedro Páramo", "Juan Rulfo", 12),
    Libros ("El Amor en los Tiempos del Cólera", "Gabriel García Márquez", 14),
    Libros ("Ensayo sobre la Ceguera", "José Saramago", 9),
    Libros ("El Guardián entre el Centeno", "J.D. Salinger", 10),
    Libros ("Cumbres Borrascosas", "Emily Brontë", 8),
    Libros ("La Iliada", "Homero", 13),
    Libros ("La Sombra del Viento", "Carlos Ruiz Zafón", 7),
    Libros ("Memorias de una Geisha", "Arthur Golden", 8),
    Libros ("El Perfume", "Patrick Süskind", 11),
    Libros ("La Peste", "Albert Camus", 9),
    Libros ("El Alquimista", "Paulo Coelho", 18),
    Libros ("El Juego de Ender", "Orson Scott Card", 10),
    Libros ("La Isla del Tesoro", "Robert Louis Stevenson", 12),
    };

     
    int opciones;
    do {

        Libros biblioteca;
        cout << "\n";
        cout << "             *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n";
        cout << "             |                                        |\n";
        cout << "             |        Bien venido a la Libreria       |\n";
        cout << "             |                DUFFERIA                |\n";
        cout << "             |                                        |\n";
        cout << "             *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n";


        cout << "\n*---------------------------------------------------------------------*\n";
        cout << "\n                    ~~~Todos los libros~~~\n";
        biblioteca.mostrarLibros(librosArray,40);
        cout << "\n                   <---Ingresa 0 para salir--->\n";
        cout << "\n ---> Ingresa el numero del libro: ";
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