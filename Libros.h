#ifndef LIBROS_H
#define LIBROS_H
#include <iostream> 
using namespace std;

class Libros{
    private: 
    std :: string nombreLibro;
    std :: string nombreAutor;
    int cantidadDisponible;
    public: 
    Libros();
    ~Libros(){}
    Libros(std :: string nombreLibro, std :: string nombreAutor, int cantidadDisponible);
    void setNombreLibro(std :: string nombreLibro);
    void setNombreAutor(std :: string nombreAutor);
    void setCantidadDiponible(int cantidadDisponible);
    std :: string getNombreLibro();
    std :: string getNombreAutor();
    int getCantidadDisponible();
    void mostrarLibros(Libros librosArray[], int size);
    void mostrarDisponibilidad();
    void tomarLibro();

};

#endif // LIBROS_H