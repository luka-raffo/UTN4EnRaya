#ifndef MENUPRINCIPAL_H_INCLUDED
#define MENUPRINCIPAL_H_INCLUDED

char mostrarMenuPrincipal ()
{
    char ingresoMenu;
    cout<<"                 [     CUATRO EN RAYA     ]"<<endl;
    cout<<"================================================================="<<endl;
    cout<<"           [------- Seleccione una opcion -------] "<<endl;
    cout<<"================================================================="<<endl;
    cout<<"               -> Seleccione [1] para jugar <- "<<endl;
    cout<<"-> Seleccione [2] para ver los objetivos y las reglas del juego <- "<<endl;
    cout<<"               -> Seleccione [0] para salir <- "<<endl;
    cout<<"================================================================="<<endl;

    cout<<"Mi opcion es la - ";
    cin>>ingresoMenu;

    system("cls");

    string jugador1;
    string jugador2;
        switch(ingresoMenu)
        {
        case '1':

            pedirNombres(&jugador1, &jugador2);

            mostrarCuadricula();
            //cout<<"El ganador del juego es "<</*ganador*/<<endl;



            return '1';



            break;

        case '2':

            mostrarReglas();
            VolverOSalir ();
            return '1';
            break;

        case '0':
            cierreDelJuego();
            return '0';
            break;

        default:

            ingresoIncorrecto();


            break;
        }





}

#endif // MENUPRINCIPAL_H_INCLUDED
