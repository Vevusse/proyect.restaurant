<<<<<<< HEAD
<<<<<<< HEAD
#ifndef DETALLEVENTA_H_INCLUDED
#define DETALLEVENTA_H_INCLUDED
#include "venta.h"
#include "fecha.h"

class detalleVenta : public Venta{
    private:
        int idPlato; // vector dinamico
        int cantPorPlato; // cantidad vendida por cada ID de plato
        int cantPlatosVendidos; // el total de los platos vendidos, sumando todos los platos, sin incluir repetidos
        float importe;

    public:
        detalleVenta();

        int getIdPlato();
        int getCantPorPlato();
        int getCantPlatosVendidos();
        float getImporte();

        void setIdPlato(int);
        void setCantPorPlato(int);
        void setCantPlatosVendidos(int);
        void setImporte(float);

        void cargar();
        void mostrar();
        void escribirArchivo();
        void leerArchivo();


};

#endif // DETALLEVENTA_H_INCLUDED
=======
#ifndef DETALLEVENTA_H_INCLUDED
#define DETALLEVENTA_H_INCLUDED
#include "venta.h"
#include "fecha.h"

class detalleVenta : public Venta{
    private:
        int idPlato; // vector dinamico
        int cantPorPlato; // cantidad vendida por cada ID de plato
        int cantPlatosVendidos; // el total de los platos vendidos, sumando todos los platos, sin incluir repetidos
        float importe;

    public:
        detalleVenta();

        int getIdPlato();
        int getCantPorPlato();
        int getCantPlatosVendidos();
        float getImporte();

        void setIdPlato(int);
        void setCantPorPlato(int);
        void setCantPlatosVendidos(int);
        void setImporte(float);

        void cargar();
        void mostrar();
        void escribirArchivo();
        void leerArchivo();


};

#endif // DETALLEVENTA_H_INCLUDED
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
=======
#ifndef DETALLEVENTA_H_INCLUDED
#define DETALLEVENTA_H_INCLUDED
#include "venta.h"
#include "fecha.h"

class detalleVenta : public Venta{
    private:
        int idPlato; // vector dinamico
        int cantPorPlato; // cantidad vendida por cada ID de plato
        int cantPlatosVendidos; // el total de los platos vendidos, sumando todos los platos, sin incluir repetidos
        float importe;

    public:
        detalleVenta();

        int getIdPlato();
        int getCantPorPlato();
        int getCantPlatosVendidos();
        float getImporte();

        void setIdPlato(int);
        void setCantPorPlato(int);
        void setCantPlatosVendidos(int);
        void setImporte(float);

        void cargar();
        void mostrar();
        void escribirArchivo();
        void leerArchivo();


};

#endif // DETALLEVENTA_H_INCLUDED
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
