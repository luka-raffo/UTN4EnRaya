#ifndef DECLARACIONES_H_INCLUDED
#define DECLARACIONES_H_INCLUDED

    void JuegoContraMaquina(char matrizTablero[][7],int nfilas, int ncol);
    void ingresoMaquina(char matrizTablero[][7],int nfilas, int ncol, string jugador2);

    void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol);

    void cargarMatrizCuadricula (char matrizTablero[][7],int nfilas, int ncol);

    void mostrarAnimacionbienvenida();

    void mostrarReglas();

    bool cierreDelJuego ();

    bool mostrarMenuPrincipal (char matrizTablero[][7],int nfilas, int ncol);

    void pedirNombres(string *jugador1, string *jugador2);

    void mostrarCuadricula(char matrizTablero[][7]);

    void ingresoIncorrecto();

    bool volverAlMenu ();

    void ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol, string);

    void ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string);

    void empate(char matrizTablero[][7],int nfilas, int ncol,bool &banderaCorte);

    void evitar4EnRayaJugador1(char matrizTablero[][7],int nfilas, int ncol, int &ingresoMaquina);

    void completar4EnRayaMaquina (char matrizTablero[][7],int nfilas, int ncol,int &ingresoMaquina);

#endif // DECLARACIONES_H_INCLUDED
