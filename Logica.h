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

                //determina si hubo 4 en raya en Horizontal

                if(matrizTablero[i][x]=='O' && matrizTablero[i][x+1]=='O'&& matrizTablero[i][x+2]=='O'&& matrizTablero[i][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    cout<<"Has ganado "<<jugador1<<". ¡Felicitaciones!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    system("pause");
                    cout<<endl;
                    banderaCorte=1;
                }

                //determina si hubo 4 en raya en Vertical

                if(matrizTablero[i][x]=='O' && matrizTablero[i+1][x]=='O'&& matrizTablero[i+2][x]=='O'&& matrizTablero[i+3][x]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    cout<<"Has ganado "<<jugador1<<". ¡Felicitaciones!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    system("pause");
                    cout<<endl;
                    banderaCorte=1;

                }

                //determina si hubo 4 en raya en Diagonal

                if(matrizTablero[i][x]=='O' && matrizTablero[i+1][x+1]=='O'&& matrizTablero[i+2][x+2]=='O'&& matrizTablero[i+3][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    cout<<"Has ganado "<<jugador1<<". ¡Felicitaciones!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    system("pause");
                    cout<<endl;
                    banderaCorte=1;
                }

                //determina si hubo 4 en raya en Diagonal Invertida

                if(matrizTablero[i][x]=='O' && matrizTablero[i-1][x+1]=='O'&& matrizTablero[i-2][x+2]=='O'&& matrizTablero[i-3][x+3]=='O')
                {
                    rlutil::setColor(rlutil::GREEN);
                    cout<<"Has ganado "<<jugador1<<". ¡Felicitaciones!"<<endl;
                    cout<<endl;
                    rlutil::setColor(rlutil::WHITE);
                    system("pause");
                    cout<<endl;
                    banderaCorte=1;
                }


            }
            break;
        }

        //instruccion para que al ganar el jugador 1 no le de el turno al jugador 2
        if (banderaCorte!=1)
        {
            ingresoJugador2(matrizTablero, nfilas, ncol, jugador2);

            for (int i=0; i<nfilas; i++)
            {
                for (int x=0; x<ncol; x++)
                {
                    //determina si hubo 4 3n raya en horizontal
                    if(matrizTablero[i][x]=='X' && matrizTablero[i][x+1]=='X'&& matrizTablero[i][x+2]=='X'&& matrizTablero[i][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        cout<<"Has ganado "<<jugador2<<". ¡Felicitaciones!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        system("pause");
                        cout<<endl;
                        banderaCorte=1;
                    }

                    //determina si hubo 4 en raya en Vertical
                    if(matrizTablero[i][x]=='X' && matrizTablero[i+1][x]=='X'&& matrizTablero[i+2][x]=='X'&& matrizTablero[i+3][x]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        cout<<"Has ganado "<<jugador2<<". ¡Felicitaciones!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        system("pause");
                        cout<<endl;
                        banderaCorte=1;

                    }

                    //determina si hubo 4 en raya en Diagonal

                    if(matrizTablero[i][x]=='X' && matrizTablero[i+1][x+1]=='X'&& matrizTablero[i+2][x+2]=='X'&& matrizTablero[i+3][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        cout<<"Has ganado "<<jugador2<<". ¡Felicitaciones!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        system("pause");
                        cout<<endl;
                        banderaCorte=1;
                    }

                    //determina si hubo 4 en raya en Diagonal Invertida

                    if(matrizTablero[i][x]=='X' && matrizTablero[i-1][x+1]=='X'&& matrizTablero[i-2][x+2]=='X'&& matrizTablero[i-3][x+3]=='X')
                    {
                        rlutil::setColor(rlutil::GREEN);
                        cout<<"Has ganado "<<jugador2<<". ¡Felicitaciones!"<<endl;
                        cout<<endl;
                        rlutil::setColor(rlutil::WHITE);
                        system("pause");
                        cout<<endl;
                        banderaCorte=1;
                    }
                }

                break;
            }
        }
    }

    volverAlMenu();

}


#endif // LOGICA_H_INCLUDED
