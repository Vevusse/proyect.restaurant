<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>

using namespace std;
#include "Menu.h"
#include "fecha.h"
#include "rlutil.h"
#include "plato.h"



void coloresPrograma()
{
    rlutil::setBackgroundColor(rlutil::DARKGREY);
    rlutil::setColor(rlutil::WHITE);
}
void colorError()
{
    rlutil::setBackgroundColor(rlutil::RED);
    cout << "Ha ocurrido un error. Vuelta a intentarlo.";
}
void colorCorrecto()
{
 rlutil::setBackgroundColor(rlutil::LIGHTGREEN);
 cout << "Accion completada correctamente.";

}
void Pausa()
{
system("pause>nul");
}
void LimpiarPantalla() /// systemcls
{
    system("cls");
}
void entradaIncorrecta() /// Mensaje default para el usuario cuando ingresa mal una opcion de menu
{
    colorError();
    cout << "Entrada incorrecta. Por favor eliga una opcion que se encuentre listada en el menu.";
    system("pause>nul");
}
void MainMenu() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMainMenu();
        input = entradaMainMenu();
    }
    return;
}

void mostrarMainMenu() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU PRINCIPAL\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) PLATOS\n";
    rlutil::locate(0,12);
    cout << "2) VENTAS\n";
    rlutil::locate(0,13);
    cout << "3) CLIENTES\n";
    rlutil::locate(0,14);
    cout << "4) TRABAJADORES\n";
    rlutil::locate(0,15);
    cout << "--------------\n";
    rlutil::locate(0,16);
    cout << "0) SALIR DEL PROGRAMA\n";
    rlutil::locate(0,17);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMainMenu() /// Ingreso del main
{
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            menuPlatos();
        break;
        case 2:
            colorCorrecto();
            Pausa();
        ///menuVentas();
        break;
        case 3:
            colorCorrecto();
            Pausa();
        /// menuClientes();
        break;
        case 4:
            colorCorrecto();
            Pausa();
        /// menuTrabajadores();
        break;
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}

void menuPlatos() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMenuPlatos();
        input = entradaMenuPlatos();
    }
    return;
}

void mostrarMenuPlatos() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU DE PLATOS\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) INGRESAR UN PLATO\n";
    rlutil::locate(0,12);
    cout << "2) MOSTRAR UN PLATO\n";
    rlutil::locate(0,13);
    cout << "3) MOSTRAR LA CARTA \n";
    rlutil::locate(0,14);
    cout << "4) MODIFICAR UN PLATO\n";
    rlutil::locate(0,15);
    cout << "5) DAR DE BAJA UN PLATO\n";
    rlutil::locate(0,16);
    cout << "6) DAR DE ALTA UN PLATO\n";
    rlutil::locate(0,17);
    cout << "--------------\n";
    rlutil::locate(0,18);
    cout << "0) VOLVER AL MENU PRINCIPAL\n";
    rlutil::locate(0,19);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMenuPlatos() /// Ingreso del main
{
    Plato plato;
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            plato.cargar();
        break;
        case 2:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            plato.leerArchivo();
            Pausa();
        break;
        case 3:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.mostrarEntrada();
            Pausa();
            plato.mostrarPrincipal();
            Pausa();
            plato.mostrarGuarnicion();
            Pausa();
            plato.mostrarPostre();
            Pausa();
        break;
        case 4:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.modificarPlatoPorId();
            Pausa();
        break;
        case 5:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.bajarPlato();
            Pausa();
        break;
        case 6:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.subirPlato();
            Pausa();
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}


void menuTrabajadores() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMenuPlatos();
        input = entradaMenuTrabajadores();
    }
    return;
}

void mostrarMenuTrabajadores() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU DE PLATOS\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) REGISTRAR UN TRABAJADOR\n";
    rlutil::locate(0,12);
    cout << "2) MOSTRAR LOS DATOS DE UN TRABAJADOR\n";
    rlutil::locate(0,13);
    cout << "3) MOSTRAR TODOS LOS TRABAJADORES \n";
    rlutil::locate(0,14);
    cout << "4) MODIFICAR LOS DATOS DE UN TRABAJADOR\n";
    rlutil::locate(0,15);
    cout << "5) DAR DE BAJA UN TRABAJADOR\n";
    rlutil::locate(0,16);
    cout << "6) DAR DE ALTA UN TRABAJADOR\n";
    rlutil::locate(0,17);
    cout << "--------------\n";
    rlutil::locate(0,18);
    cout << "0) VOLVER AL MENU PRINCIPAL\n";
    rlutil::locate(0,19);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMenuTrabajadores() /// Ingreso del main
{
    Trabajador trabajador;
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            trabajador.cargar();
        break;
        case 2:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            trabajador.leerArchivo();
            Pausa();
        break;
        case 3:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            trabajador.mostrarTrabajadores();
            Pausa();
        break;
        case 4:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.modificarTrabajadorPorId();
            Pausa();
        break;
        case 5:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            trabajador.bajarTrabajador();
            Pausa();
        break;
        case 6:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            trabajador.subirTrabajador();
            Pausa();
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}

=======
#include <iostream>

using namespace std;
#include "Menu.h"
#include "fecha.h"
#include "rlutil.h"
#include "plato.h"



void coloresPrograma()
{
    rlutil::setBackgroundColor(rlutil::DARKGREY);
    rlutil::setColor(rlutil::WHITE);
}
void colorError()
{
    rlutil::setBackgroundColor(rlutil::RED);
    cout << "Ha ocurrido un error. Vuelta a intentarlo.";
}
void colorCorrecto()
{
 rlutil::setBackgroundColor(rlutil::LIGHTGREEN);
 cout << "Accion completada correctamente.";

}
void Pausa()
{
system("pause>nul");
}
void LimpiarPantalla() /// systemcls
{
    system("cls");
}
void entradaIncorrecta() /// Mensaje default para el usuario cuando ingresa mal una opcion de menu
{
    colorError();
    cout << "Entrada incorrecta. Por favor eliga una opcion que se encuentre listada en el menu.";
    system("pause>nul");
}
void MainMenu() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMainMenu();
        input = entradaMainMenu();
    }
    return;
}

void mostrarMainMenu() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU PRINCIPAL\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) PLATOS\n";
    rlutil::locate(0,12);
    cout << "2) VENTAS\n";
    rlutil::locate(0,13);
    cout << "3) CLIENTES\n";
    rlutil::locate(0,14);
    cout << "4) TRABAJADORES\n";
    rlutil::locate(0,15);
    cout << "--------------\n";
    rlutil::locate(0,16);
    cout << "0) SALIR DEL PROGRAMA\n";
    rlutil::locate(0,17);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMainMenu() /// Ingreso del main
{
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            menuPlatos();
        break;
        case 2:
            colorCorrecto();
            Pausa();
        ///menuVentas();
        break;
        case 3:
            colorCorrecto();
            Pausa();
        /// menuClientes();
        break;
        case 4:
            colorCorrecto();
            Pausa();
        /// menuTrabajadores();
        break;
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}

void menuPlatos() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMenuPlatos();
        input = entradaMenuPlatos();
    }
    return;
}

void mostrarMenuPlatos() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU DE PLATOS\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) INGRESAR UN PLATO\n";
    rlutil::locate(0,12);
    cout << "2) MOSTRAR UN PLATO\n";
    rlutil::locate(0,13);
    cout << "3) CARTA (MOSTRAR TODOS LOS PLATOS) \n";
    rlutil::locate(0,14);
    cout << "4) MODIFICAR UN PLATO\n";
    rlutil::locate(0,15);
    cout << "5) DAR DE BAJA UN PLATO\n";
    rlutil::locate(0,16);
    cout << "--------------\n";
    rlutil::locate(0,17);
    cout << "0) SALIR DEL PROGRAMA\n";
    rlutil::locate(0,18);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMenuPlatos() /// Ingreso del main
{
    Plato plato;
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            plato.cargar();
        break;
        case 2:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            plato.leerArchivo();
            Pausa();
        break;
        case 3:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.mostrarCarta();
            Pausa();
        break;
        case 4:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.modificarPlatoPorId();
            Pausa();
        break;
        case 5:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.bajarPlato();
            Pausa();
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
=======
#include <iostream>

using namespace std;
#include "Menu.h"
#include "fecha.h"
#include "rlutil.h"
#include "plato.h"



void coloresPrograma()
{
    rlutil::setBackgroundColor(rlutil::DARKGREY);
    rlutil::setColor(rlutil::WHITE);
}
void colorError()
{
    rlutil::setBackgroundColor(rlutil::RED);
    cout << "Ha ocurrido un error. Vuelta a intentarlo.";
}
void colorCorrecto()
{
 rlutil::setBackgroundColor(rlutil::LIGHTGREEN);
 cout << "Accion completada correctamente.";

}
void Pausa()
{
system("pause>nul");
}
void LimpiarPantalla() /// systemcls
{
    system("cls");
}
void entradaIncorrecta() /// Mensaje default para el usuario cuando ingresa mal una opcion de menu
{
    colorError();
    cout << "Entrada incorrecta. Por favor eliga una opcion que se encuentre listada en el menu.";
    system("pause>nul");
}
void MainMenu() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMainMenu();
        input = entradaMainMenu();
    }
    return;
}

void mostrarMainMenu() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU PRINCIPAL\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) PLATOS\n";
    rlutil::locate(0,12);
    cout << "2) VENTAS\n";
    rlutil::locate(0,13);
    cout << "3) CLIENTES\n";
    rlutil::locate(0,14);
    cout << "4) TRABAJADORES\n";
    rlutil::locate(0,15);
    cout << "--------------\n";
    rlutil::locate(0,16);
    cout << "0) SALIR DEL PROGRAMA\n";
    rlutil::locate(0,17);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMainMenu() /// Ingreso del main
{
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            menuPlatos();
        break;
        case 2:
            colorCorrecto();
            Pausa();
        ///menuVentas();
        break;
        case 3:
            colorCorrecto();
            Pausa();
        /// menuClientes();
        break;
        case 4:
            colorCorrecto();
            Pausa();
        /// menuTrabajadores();
        break;
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}

void menuPlatos() /// Main
{

    int input = -1;
    while (input != 0)
    {
        coloresPrograma();
        LimpiarPantalla();
        mostrarMenuPlatos();
        input = entradaMenuPlatos();
    }
    return;
}

void mostrarMenuPlatos() ///  Print del main
{

    MostrarFechaLocal();
    rlutil::locate(0,8);
    cout << "--------------\n";
    rlutil::locate(0,9);
    cout << "MENU DE PLATOS\n";
    rlutil::locate(0,10);
    cout << "--------------\n";
    rlutil::locate(0,11);
    cout << "1) INGRESAR UN PLATO\n";
    rlutil::locate(0,12);
    cout << "2) MOSTRAR UN PLATO\n";
    rlutil::locate(0,13);
    cout << "3) CARTA (MOSTRAR TODOS LOS PLATOS) \n";
    rlutil::locate(0,14);
    cout << "4) MODIFICAR UN PLATO\n";
    rlutil::locate(0,15);
    cout << "5) DAR DE BAJA UN PLATO\n";
    rlutil::locate(0,16);
    cout << "--------------\n";
    rlutil::locate(0,17);
    cout << "0) SALIR DEL PROGRAMA\n";
    rlutil::locate(0,18);
    cout << "Ingrese el numero de la opcion deseada: \n";
}

int entradaMenuPlatos() /// Ingreso del main
{
    Plato plato;
    int opcion;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            plato.cargar();
        break;
        case 2:
            colorCorrecto();
            Pausa();
            coloresPrograma();
            LimpiarPantalla();
            plato.leerArchivo();
            Pausa();
        break;
        case 3:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.mostrarCarta();
            Pausa();
        break;
        case 4:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.modificarPlatoPorId();
            Pausa();
        break;
        case 5:
            colorCorrecto();
            coloresPrograma();
            Pausa();
            plato.bajarPlato();
            Pausa();
        case 0:
        break;
        default:

        entradaIncorrecta();
        break;
    }
    return opcion;
}
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
