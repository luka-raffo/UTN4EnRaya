#ifndef LOGICA_H_INCLUDED
#define LOGICA_H_INCLUDED


void logicaDelJuego(char matrizTablero[][7],int nfilas, int ncol)
{
    string jugador1;
    string jugador2;
    pedirNombres(&jugador1, &jugador2);

    int contadorFichasSeguidasO=1;
    int contadorFichasSeguidasX=1;
    bool banderaCorte = 0;

    while(banderaCorte!=1)
    {

        ingresoJugador1(matrizTablero, nfilas, ncol, jugador1);


        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
            {

                //determina si hubo 4 en raya en Diagonal Horizontal

                if(matrizTablero[x][i]=='O' && matrizTablero[x][i+1]=='O'&& matrizTablero[x][i+2]=='O'&& matrizTablero[x][i+3]=='O')
                {
                    cout<<"hubo un ganador el contador O va en: "<<contadorFichasSeguidasO<<endl;
                    system("pause");
                    banderaCorte=1;
                    }

                //determina si hubo 4 en raya en Vertical

                if(matrizTablero[x][i]=='O' && matrizTablero[x+1][i]=='O'&& matrizTablero[x+2][i]=='O'&& matrizTablero[x+3][i]=='O')
                {
                    cout<<"hubo un ganador el contador O va en: "<<contadorFichasSeguidasO<<endl;
                    system("pause");
                    banderaCorte=1;

                    }

                //determina si hubo 4 en raya en Diagonal

                if(matrizTablero[x][i]=='O' && matrizTablero[x+1][i+1]=='O'&& matrizTablero[x+2][i+2]=='O'&& matrizTablero[x+3][i+3]=='O')
                {
                    cout<<"hubo un ganador el contador O va en: "<<contadorFichasSeguidasO<<endl;
                    system("pause");
                    banderaCorte=1;
                    }

                  //determina si hubo 4 en raya en Diagonal Invertida

                    if(matrizTablero[x][i]=='O' && matrizTablero[x-1][i+1]=='O'&& matrizTablero[x-2][i+2]=='O'&& matrizTablero[x-3][i+3]=='O')
                {
                    cout<<"hubo un ganador el contador X va en: "<<contadorFichasSeguidasX<<endl;
                    system("pause");
                    banderaCorte=1;
                    }


            }
            break;
        }

        //instruccion para que al ganar el jugador 1 no le de el turno al jugador 2
        if (banderaCorte!=1)    {
        ingresoJugador2(matrizTablero, nfilas, ncol, jugador2);




        for (int i=0; i<nfilas; i++)
        {
            for (int x=0; x<ncol; x++)
            {
                //determina si hubo 4 3n raya en horizontal
                if(matrizTablero[x][i]=='X' && matrizTablero[x][i+1]=='X'&& matrizTablero[x][i+2]=='X'&& matrizTablero[x][i+3]=='X')
                {
                    cout<<"hubo un ganador el contador X va en: "<<contadorFichasSeguidasX<<endl;
                    system("pause");
                    banderaCorte=1;
                    }

                //determina si hubo 4 en raya en Vertical
                if(matrizTablero[x][i]=='X' && matrizTablero[x+1][i]=='X'&& matrizTablero[x+2][i]=='X'&& matrizTablero[x+3][i]=='X')
                {
                    cout<<"hubo un ganador el contador X va en: "<<contadorFichasSeguidasX<<endl;
                    system("pause");
                    banderaCorte=1;

                    }

                //determina si hubo 4 en raya en Diagonal

                if(matrizTablero[x][i]=='X' && matrizTablero[x+1][i+1]=='X'&& matrizTablero[x+2][i+2]=='X'&& matrizTablero[x+3][i+3]=='X')
                {
                    cout<<"hubo un ganador el contador X va en: "<<contadorFichasSeguidasX<<endl;
                    system("pause");
                    banderaCorte=1;
                    }

                //determina si hubo 4 en raya en Diagonal Invertida

                if(matrizTablero[x][i]=='X' && matrizTablero[x-1][i+1]=='X'&& matrizTablero[x-2][i+2]=='X'&& matrizTablero[x-3][i+3]=='X')
                {
                    cout<<"hubo un ganador el contador X va en: "<<contadorFichasSeguidasX<<endl;
                    system("pause");
                    banderaCorte=1;
                    }



            }
            break;
        }
    }
    }

}


#endif // LOGICA_H_INCLUDED
