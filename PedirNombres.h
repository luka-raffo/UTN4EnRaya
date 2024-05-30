#ifndef PEDIRNOMBRES_H_INCLUDED
#define PEDIRNOMBRES_H_INCLUDED

void pedirNombres(string *jugador1, string *jugador2)
{
    system ("cls");
    rlutil::locate(44, 1);
    cout<<"-> Ingrese el nombre del primer jugador <-"<<endl;
    rlutil::locate(55, 2);
    cout<<"- ";
    rlutil::locate(57, 2);
    cin>>*jugador1;
    rlutil::locate(1, 3);
    cout<<"========================================================================================================================"<<endl;
    rlutil::locate(44, 4);
    cout<<"-> Ingrese el nombre del segundo jugador <-"<<endl;
    rlutil::locate(55, 5);
    cout<<"- ";
    rlutil::locate(57, 5);
    cin>>*jugador2;
    system ("cls");
}


#endif // PEDIRNOMBRES_H_INCLUDED
