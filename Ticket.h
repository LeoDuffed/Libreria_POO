#ifndef TICKET_H
#define TICKET_H
#include <iostream> 
using namespace std;

class Ticket{
    private:
    std :: string nombre;
    int dia;
    int mes;
    int anio;
    public: 
    Ticket();
    ~Ticket(){}
    Ticket(std :: string nombre, int dia, int mes, int anio);
    void setNombre(std :: string nombre);
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    std :: string getNombre();
    int getDia();
    int getMes();
    int getAnio();
    void mostrarTicket();

};

#endif // TICKET_H