<<<<<<< HEAD
<<<<<<< HEAD
#ifndef PLATO_H_INCLUDED
#define PLATO_H_INCLUDED

class Plato {

    private:
    int idPlato, tipoPlato, stock;
    char nombrePlato[50];
    float precio;
    bool estado;

    public:
    Plato();
    int getIdPlato();
    int getTipoPlato();
    int getStock();
    char* getNombrePlato();
    float getPrecio();
    bool getEstado();

    void setIdPlato(int);
    void setNombrePlato(char*);
    void setTipoPlato(int);
    void setStock(int);
    void setPrecio(float);
    void setEstado(bool);

    void cargar();
    void mostrar();
    void escribirArchivo();
    void leerArchivo();

    void mostrarEntrada();
    void mostrarPrincipal();
    void mostrarGuarnicion();
    void mostrarPostre();
    void modificarPlatoPorId();
    bool existeIdPlato(int);
    void bajarPlato();
    void subirPlato();
    void sobreescribirArchivo();

};

    int validarIdPlato();
    int validarTipoPlato();
    int validarStockPlato();
    float validarPrecioPlato();
    void validarNombrePlato(Plato*);
    void agregarStock(int);



#endif // PLATO_H_INCLUDED
=======
#ifndef PLATO_H_INCLUDED
#define PLATO_H_INCLUDED

class Plato {

    private:
    int idPlato, tipoPlato, stock;
    char nombrePlato[50];
    float precio;
    bool estado;

    public:
    Plato();
    int getIdPlato();
    int getTipoPlato();
    int getStock();
    char* getNombrePlato();
    float getPrecio();
    bool getEstado();

    void setIdPlato(int);
    void setNombrePlato(char*);
    void setTipoPlato(int);
    void setStock(int);
    void setPrecio(float);
    void setEstado(bool);

    void cargar();
    void mostrar();
    void escribirArchivo();
    void leerArchivo();
    void mostrarCarta();
    void modificarPlatoPorId();
    bool existeIdPlato(int);
    void bajarPlato();
    void sobreescribirArchivo();

};

    int validarIdPlato();
    int validarTipoPlato();
    int validarStockPlato();
    float validarPrecioPlato();
    void validarNombrePlato(Plato*);
    void agregarStock(int);



#endif // PLATO_H_INCLUDED
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
=======
#ifndef PLATO_H_INCLUDED
#define PLATO_H_INCLUDED

class Plato {

    private:
    int idPlato, tipoPlato, stock;
    char nombrePlato[50];
    float precio;
    bool estado;

    public:
    Plato();
    int getIdPlato();
    int getTipoPlato();
    int getStock();
    char* getNombrePlato();
    float getPrecio();
    bool getEstado();

    void setIdPlato(int);
    void setNombrePlato(char*);
    void setTipoPlato(int);
    void setStock(int);
    void setPrecio(float);
    void setEstado(bool);

    void cargar();
    void mostrar();
    void escribirArchivo();
    void leerArchivo();
    void mostrarCarta();
    void modificarPlatoPorId();
    bool existeIdPlato(int);
    void bajarPlato();
    void sobreescribirArchivo();

};

    int validarIdPlato();
    int validarTipoPlato();
    int validarStockPlato();
    float validarPrecioPlato();
    void validarNombrePlato(Plato*);
    void agregarStock(int);



#endif // PLATO_H_INCLUDED
>>>>>>> 53062194fb36d1a496bdbbfe5b90ecfb95ac10df
