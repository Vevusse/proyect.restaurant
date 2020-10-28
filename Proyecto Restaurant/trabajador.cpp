<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#include "trabajador.h"
#include "menu.h"

Trabajador::Trabajador(){
    TipoTrabajador = false;
    estadoTrabajador = false;
    IdTrabajador = 0;
    IngresoTrabajador = 0;
}

bool Trabajador::getTipoTrabajador(){
    return TipoTrabajador;
}
bool Trabajador::getEstadoTrabajador(){
    return estadoTrabajador;
}
int Trabajador::getIdTrabajador(){
    return IdTrabajador;
}
Fecha Trabajador::getIngresoTrabajador(){
    return IngresoTrabajador;
}

void Trabajador::setTipoTrabajador(int t){
    TipoTrabajador = t;
}
void Trabajador::setEstadoTrabajador(bool e){
    estadoTrabajador = e;
}
void Trabajador::setIdTrabajador(int d){
    IdTrabajador = d;
}
void Trabajador::setIngresoTrabajador(Fecha fin){
    IngresoTrabajador = fin;
}

void Trabajador::mostrarTrabajadores(){
    FILE* p;
    Trabajador trabajador;
    p = fopen(FILE_TRABAJADOR, "rb");
    if (p == NULL)
    {
        colorError();
        coloresPrograma();
        return;
    }
    cout << "--------------\n";
    cout << "LOS TRABAJADORES  \n";
    while(fread(&trabajador, sizeof (Trabajador), 1, p)){
    if(trabajador.estado == 1){
    cout << "--------------\n";
    trabajador.mostrar();
    }
    }
    fclose(p);
}

void Trabajador::modificarTrabajadorPorId(){
    FILE* p;
    Trabajador trabajador;
    bool es = false;
    int id;
    p = fopen(FILE_TRABAJADOR, "rb+");
    if (p == NULL)
    {
        colorError();
        coloresPrograma();
        return;
    }
    cout << "Ingrese el id del trabajador que desea modificar: ";
    cin >> id;
    while (fread(&trabajador, sizeof (Trabajador), 1, p)){
        if (id == trabajador.idPlato){
            trabajador.setEstado(es);
            fseek(p, ftell(p) - sizeof (Trabajador), 0);
            fwrite(&trabajador, sizeof(Trabajador), 1, p);
            Pausa();
            fclose(p);
            return;
        }
    }
    fclose(p);
}

void Trabajador::bajarTrabajador(){
    FILE* p;
    Trabajador trabajador;
    bool es = false;
    int id;
    p = fopen(FILE_TRABAJADOR, "rb+");
    if (p == NULL)
    {
        colorError();
        coloresPrograma();
        return;
    }
    cout << "Ingrese el id del trabajador que desea dar de baja: ";
    cin >> id;

    while (fread(&trabajador, sizeof (Trabajador), 1, p)){
        if (id == trabajador.idPlato){
            trabajador.setEstado(es);
            fseek(p, ftell(p) - sizeof (Trabajador), 0);
            fwrite(&trabajador, sizeof(Trabajador), 1, p);
            Pausa();
            fclose(p);
            return;

        }

    }


    fclose(p);

}

void Trabajador::subirTrabajador(){
    FILE* p;
    Trabajador trabajador;
    bool es = true;
    int id;
    p = fopen(FILE_TRABAJADOR, "rb+");
    if (p == NULL)
    {
        colorError();
        coloresPrograma();
        return;
    }
    cout << "Ingrese el id del trabajador que desea dar de alta: ";
    cin >> id;

    while (fread(&trabajador, sizeof (Trabajador), 1, p)){
        if (id == trabajador.idPlato){
            trabajador.setEstado(es);
            fseek(p, ftell(p) - sizeof (Trabajador), 0);
            fwrite(&trabajador, sizeof(Trabajador), 1, p);
            Pausa();
            fclose(p);
            return;
        }

    }


    fclose(p);

}

void Trabajador::cargar(){
    Persona::cargar();
    cout << "Id Trabajador : ";
    cin >> IdTrabajador;
    cout << "Estado del trabajador : (0 para inactivo, 1 para activo)";
    cin >> estadoTrabajador;
    ///cout << "Ingreso del trabajador : ";
   /// hacer el cin del ingreso (igualmente chequear bien los sets y gets)
    cout << "Tipo de trabajador: (0 para trabajador de local, 1 para delivery)";
    cin >> TipoTrabajador;
}

void Trabajador::mostrar(){
    Persona::mostrar();
    cout << "Id Trabajador: " << IdTrabajador << endl;
    cout << "Estado del trabajador: " << estadoTrabajador << endl;
    // cout << "Ingreso del trabajador: " << IngresoTrabajador << endl;
    cout << "Tipo de trabajador: (De local o delivery) " << TipoTrabajador << endl;
}
=======
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#include "trabajador.h"

Trabajador::Trabajador(){
    TipoTrabajador = false;
    estadoTrabajador = false;
    IdTrabajador = 0;
    IngresoTrabajador = 0;
}

bool Trabajador::getTipoTrabajador(){
    return TipoTrabajador;
}
bool Trabajador::getEstadoTrabajador(){
    return estadoTrabajador;
}
int Trabajador::getIdTrabajador(){
    return IdTrabajador;
}
Fecha Trabajador::getIngresoTrabajador(){
    return IngresoTrabajador;
}

void Trabajador::setTipoTrabajador(int t){
    TipoTrabajador = t;
}
void Trabajador::setEstadoTrabajador(bool e){
    estadoTrabajador = e;
}
void Trabajador::setIdTrabajador(int d){
    IdTrabajador = d;
}
void Trabajador::setIngresoTrabajador(Fecha fin){
    IngresoTrabajador = fin;
}

void Trabajador::cargar(){
    Persona::cargar();
    cout << "Id Trabajador : ";
    cin >> IdTrabajador;
    cout << "Estado del trabajador : (0 para inactivo, 1 para activo)";
    cin >> estadoTrabajador;
    ///cout << "Ingreso del trabajador : ";
   /// hacer el cin del ingreso (igualmente chequear bien los sets y gets)
    cout << "Tipo de trabajador: (0 para trabajador de local, 1 para delivery)";
    cin >> TipoTrabajador;
}
void Trabajador::mostrar(){
    Persona::mostrar();
    cout << "Id Trabajador: " << IdTrabajador << endl;
    cout << "Estado del trabajador: " << estadoTrabajador << endl;
    // cout << "Ingreso del trabajador: " << IngresoTrabajador << endl;
    cout << "Tipo de trabajador: (De local o delivery) " << TipoTrabajador << endl;
}
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
=======
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#include "trabajador.h"

Trabajador::Trabajador(){
    TipoTrabajador = false;
    estadoTrabajador = false;
    IdTrabajador = 0;
    IngresoTrabajador = 0;
}

bool Trabajador::getTipoTrabajador(){
    return TipoTrabajador;
}
bool Trabajador::getEstadoTrabajador(){
    return estadoTrabajador;
}
int Trabajador::getIdTrabajador(){
    return IdTrabajador;
}
Fecha Trabajador::getIngresoTrabajador(){
    return IngresoTrabajador;
}

void Trabajador::setTipoTrabajador(int t){
    TipoTrabajador = t;
}
void Trabajador::setEstadoTrabajador(bool e){
    estadoTrabajador = e;
}
void Trabajador::setIdTrabajador(int d){
    IdTrabajador = d;
}
void Trabajador::setIngresoTrabajador(Fecha fin){
    IngresoTrabajador = fin;
}

void Trabajador::cargar(){
    Persona::cargar();
    cout << "Id Trabajador : ";
    cin >> IdTrabajador;
    cout << "Estado del trabajador : (0 para inactivo, 1 para activo)";
    cin >> estadoTrabajador;
    ///cout << "Ingreso del trabajador : ";
   /// hacer el cin del ingreso (igualmente chequear bien los sets y gets)
    cout << "Tipo de trabajador: (0 para trabajador de local, 1 para delivery)";
    cin >> TipoTrabajador;
}
void Trabajador::mostrar(){
    Persona::mostrar();
    cout << "Id Trabajador: " << IdTrabajador << endl;
    cout << "Estado del trabajador: " << estadoTrabajador << endl;
    // cout << "Ingreso del trabajador: " << IngresoTrabajador << endl;
    cout << "Tipo de trabajador: (De local o delivery) " << TipoTrabajador << endl;
}
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
