#include <iostream>
#include <cstdlib>
#include <string.h>
#include <windows.h>
#include "rlutil.h"
#define R "\033[31m" //ROJO
#define RESET "\033[0m" //RESET COLOR
using namespace std;

//headers propios
#include "Declaraciones.h"
#include "FuncionesGraficas.h"
#include "FuncionesDeJuego.h"

int main()
{
    rlutil::setBackgroundColor(rlutil::BLACK); //FONDO NEGRO
    rlutil::setColor(rlutil::WHITE); //FONDO BLANCO


    char opcionesMenu(char ingresoMenu);
    const int NFILAS =6;
    const int NCOLUMNAS =7;

    char matrizTablero[NFILAS][NCOLUMNAS];

    string jugador1;
    string jugador2;

    mostrarAnimacionbienvenida(); //MOSTRAR CARTEL DE INICIO DEL PROGRAMA


    while(mostrarMenuPrincipal(matrizTablero, NFILAS,  NCOLUMNAS))
        {

        }

    return 0;
}
