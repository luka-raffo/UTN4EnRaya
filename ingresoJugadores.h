#ifndef INGRESOJUGADORES_H_INCLUDED
#define INGRESOJUGADORES_H_INCLUDED


char ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol,string jugador1)
{

    int ingresoColumnaUsuario1;


    cout<<"- "<<jugador1<<", ingrese la COLUMNA donde quiera poner su ficha: ";
    cin>>ingresoColumnaUsuario1;
    cout<<endl;

            if (ingresoColumnaUsuario1>ncol or ingresoColumnaUsuario1==0)
            {
                cout<<"[Esta columna no existe, ingrese una columna valida]: ";
                cin>>ingresoColumnaUsuario1;
                cout<<endl;
            }

    for (int i=0; i<ncol-1; i++)
    {

            if (matrizTablero[i][ingresoColumnaUsuario1-1] == '-')
            {
                matrizTablero[i][ingresoColumnaUsuario1-1]= 'O';
                break;
            }

    }
        mostrarCuadricula(matrizTablero);

}



char ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string jugador2)
{

    int ingresoColumnaUsuario2;


    cout<<"- "<<jugador2<<", ingrese la COLUMNA donde quiera poner su ficha: ";
    cin>>ingresoColumnaUsuario2;
    cout<<endl;

            if (ingresoColumnaUsuario2>ncol or ingresoColumnaUsuario2==0)
            {
                cout<<"[Esta columna no existe, ingrese una columna valida]: ";
                cin>>ingresoColumnaUsuario2;
                cout<<endl;
            }


    for (int i=0; i<ncol-1; i++)
    {

            if (matrizTablero[i][ingresoColumnaUsuario2-1] == '-')
            {

                matrizTablero[i][ingresoColumnaUsuario2-1]= 'X';
                break;
            }

    }

        mostrarCuadricula(matrizTablero);

}

#endif // INGRESOJUGADORES_H_INCLUDED

