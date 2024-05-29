#ifndef LOGICADELJUEGO_H_INCLUDED
#define LOGICADELJUEGO_H_INCLUDED

void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol)
{
    string jugador1;
    string jugador2;
    pedirNombres(&jugador1, &jugador2);

    int contadorFichasSeguidasO=0;
    int contadorFichasSeguidasX=0;
    bool banderaCorte = 0;

    while(banderaCorte!=1)
    {

        ingresoJugador1(matrizTablero, nfilas, ncol, jugador1);
        ingresoJugador2(matrizTablero, nfilas, ncol, jugador2);

        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                if(matrizTablero[x][i]=='O'||matrizTablero[i][x]=='O')
                {
                    contadorFichasSeguidasO++;
                    cout<<"el contador va en: "<<contadorFichasSeguidasO<<endl;
                    if (contadorFichasSeguidasO==4)
                    {
                        banderaCorte=1;

                    }


                }
                else
                {
                    contadorFichasSeguidasO=0;
                    cout<<"se corto";

                }

            }

        }
    }

}


#endif // LOGICADELJUEGO_H_INCLUDED
