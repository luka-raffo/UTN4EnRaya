#include <iostream>
#include <cstdlib>
#include <string.h>
#include <windows.h>
using namespace std;

#include "Declaraciones.h"
#include "Bienvenida.h"
#include "Reglas.h"
#include "CierreDelJuego.h"
#include "MenuPrincipal.h"
#include "PedirNombres.h"
#include "MostrarCuadricula.h"
#include "IngresoIncorrecto.h"
#include "VolverOSalir.h"
#include "ingresoJugadores.h"



int main()
{
    char ingresoMenu;
    char opcionesMenu(char ingresoMenu);
    const int NFILAS =6;
    const int NCOLUMNAS =7;

    char matrizTablero[NFILAS][NCOLUMNAS];

    ///nombre de jugadores
    string jugador1;
    string jugador2;

    //mostrarAnimacionBienvenida()
    mostrarAnimacionbienvenida();

    //mostrar


    while(mostrarMenuPrincipal(matrizTablero, NFILAS,  NCOLUMNAS)) {
        //ejecutarMenu





    }

    for (int i=0; i<6; i++)
        {
            for (int x=0; x<7; x++)
            {
                matrizTablero[i][x]= '-';
                Sleep(10);
            }
        }

        matrizTablero[6][7];

    return 0;
}
