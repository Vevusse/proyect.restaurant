<<<<<<< HEAD
<<<<<<< HEAD
#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "persona.h"
#include "fecha.h"

class Trabajador : public Persona{

    private:
    bool TipoTrabajador;
    bool estadoTrabajador;
    int IdTrabajador;
    Fecha IngresoTrabajador;

    public:
    Trabajador();

    bool getTipoTrabajador();
    bool getEstadoTrabajador();
    int getIdTrabajador();
    Fecha getIngresoTrabajador();

    void setTipoTrabajador(int);
    void setEstadoTrabajador(bool);
    void setIdTrabajador(int);
    void setIngresoTrabajador(Fecha);

    void cargar();
    void mostrar();
    void escribirArchivo();
    void leerArchivo();

    void mostrarTrabajadores();
    void modificarTrabajadorPorId();
    void bajarTrabajador();
    void subirTrabajador();

};




#endif // TRABAJADOR_H_INCLUDED
=======
#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "persona.h"
#include "fecha.h"

class Trabajador : public Persona{

    private:
    bool TipoTrabajador;
    bool estadoTrabajador;
    int IdTrabajador;
    Fecha IngresoTrabajador;

    public:
    Trabajador();

    bool getTipoTrabajador();
    bool getEstadoTrabajador();
    int getIdTrabajador();
    Fecha getIngresoTrabajador();

    void setTipoTrabajador(int);
    void setEstadoTrabajador(bool);
    void setIdTrabajador(int);
    void setIngresoTrabajador(Fecha);

    void cargar();
    void mostrar();
    void escribirArchivo();
    void leerArchivo();
};




#endif // TRABAJADOR_H_INCLUDED
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
=======
#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "persona.h"
#include "fecha.h"

class Trabajador : public Persona{

    private:
    bool TipoTrabajador;
    bool estadoTrabajador;
    int IdTrabajador;
    Fecha IngresoTrabajador;

    public:
    Trabajador();

    bool getTipoTrabajador();
    bool getEstadoTrabajador();
    int getIdTrabajador();
    Fecha getIngresoTrabajador();

    void setTipoTrabajador(int);
    void setEstadoTrabajador(bool);
    void setIdTrabajador(int);
    void setIngresoTrabajador(Fecha);

    void cargar();
    void mostrar();
    void escribirArchivo();
    void leerArchivo();
};




#endif // TRABAJADOR_H_INCLUDED
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
