#ifndef INGRESOJUGADORES_H_INCLUDED
#define INGRESOJUGADORES_H_INCLUDED

char ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol,string jugador1)
{
    int ingresoColumnaUsuario1;
    int ingresoFilaUsuario1;


    cout<<"--"<<jugador1<<"-- ingrese la COLUMNA donde quiera poner su ficha: "<<endl;
    cin>>ingresoColumnaUsuario1;

    cout<<"ingrese la FILA donde quiera poner su ficha: "<<endl;
        cin>>ingresoFilaUsuario1;



    for (int i=0; i<nfilas; i++)
    {
        for (int x=0; x<ncol; x++)
        {

            matrizTablero[ingresoColumnaUsuario1][ingresoFilaUsuario1]= 'O';



        }
    }



    for (int i=nfilas-1; i>0; i--)
    {
        for (int x=ncol-1; x>0; x--)
        {

            cout<< matrizTablero[i][x] << "   ";

        }


                system("pause");

        cout<<endl;

    }

    system("cls");
}


char ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string jugador2)
{

    int ingresoColumnaUsuario2;
    int ingresoFilaUsuario2;

    cout<<"--"<<jugador2<<"-- ingrese la COLUMNA donde quiera poner su ficha: "<<endl;
    cin>>ingresoColumnaUsuario2;

    cout<<"ingrese la FILA donde quiera poner su ficha: "<<endl;
        cin>>ingresoFilaUsuario2;


    for (int i=0; i<nfilas; i++)
    {
        for (int x=0; x<ncol; x++)
        {


            matrizTablero[ingresoColumnaUsuario2-1][ingresoFilaUsuario2-1]= 'X';

        }
    }


    for (int i=0; i<nfilas; i++)
    {
        for (int x=0; x<ncol; x++)
        {

            cout<< matrizTablero[i][x] << "   ";

        }

        matrizTablero[nfilas][ncol];
        system("pause");
        cout<<endl;

    }

    system("cls");




}

#endif // INGRESOJUGADORES_H_INCLUDED
