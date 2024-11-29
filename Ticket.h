#ifndef TICKET_H
#define TICKET_H
#include <iostream> 
using namespace std;

class Ticket{
    private:
    std :: string nombre;
    std :: string nombreLibro;
    int dia;
    int mes;
    int anio;
    int cantidadTomada;

    public: 
    Ticket();
    ~Ticket(){}
    Ticket(std :: string nombre,std :: string nombreLibro, int dia, int mes, int anio, int cantidadTomada);
    void setNombre(std :: string nombre);
    void setNombreLibro(std :: string nombreLibro);
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    void setCantidadTomada(int cantidadTomada);
    std :: string getNombre();
    std :: string getNombreLibro();
    int getDia();
    int getMes();
    int getAnio();
    int getCantidadTomada();
    void calcularFechaDev();
    void mostrarTicket();

};

#endif // TICKET_H