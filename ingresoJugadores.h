#ifndef INGRESOJUGADORES_H_INCLUDED
#define INGRESOJUGADORES_H_INCLUDED

char ingresoJugador1(char matrizTablero[][7],int nfilas, int ncol,string jugador1)
{
    int ingresoColumnaUsuario1;
    int ingresoFilaUsuario1;


    cout<<"- "<<jugador1<<", ingrese la COLUMNA donde quiera poner su ficha: ";
    cin>>ingresoColumnaUsuario1;
    cout<<endl;
    cout<<"- Ingrese la FILA donde quiera poner su ficha: ";
    cin>>ingresoFilaUsuario1;

    for (int i=0; i<nfilas-1; i++)
    {
        for (int x=0; x<ncol-1; x++)
        {

            matrizTablero[ingresoFilaUsuario1-1][ingresoColumnaUsuario1-1]= 'O';

        }
    }

     for (int i=nfilas; i>0; i--)
    {
        for (int x=0; x<ncol; x++)
        {

            cout<< matrizTablero[i-1][x] << "   ";

        }
        system("pause");
        cout<<endl;



    }

}


char ingresoJugador2(char matrizTablero[][7],int nfilas, int ncol, string jugador2)
{

    int ingresoColumnaUsuario2;
    int ingresoFilaUsuario2;

    cout<<"- "<<jugador2<<", ingrese la COLUMNA donde quiera poner su ficha: ";
    cin>>ingresoColumnaUsuario2;
    cout<<endl;
    cout<<"- Ingrese la FILA donde quiera poner su ficha: ";
    cin>>ingresoFilaUsuario2;
    cout<<endl;


    for (int i=0; i<nfilas; i++)
    {
        for (int x=0; x<ncol; x++)
        {

            matrizTablero[ingresoFilaUsuario2-1][ingresoColumnaUsuario2-1]= 'X';

        }
    }


    for (int i=nfilas; i>0; i--)
    {
        for (int x=0; x<ncol; x++)
        {

            cout<< matrizTablero[i-1][x] << "   ";

        }
        system("pause");
        cout<<endl;

    }





}

#endif // INGRESOJUGADORES_H_INCLUDED
