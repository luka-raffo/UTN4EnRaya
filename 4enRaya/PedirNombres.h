#ifndef PEDIRNOMBRES_H_INCLUDED
#define PEDIRNOMBRES_H_INCLUDED

void pedirNombres(string *jugador1, string *jugador2)
{
    system ("cls");
    cout<<"- Ingrese el nombre del primer jugador -"<<endl;
    cout<<"- ";
    cin>>*jugador1;
    cout<<"========================================="<<endl;
    cout<<"- Ingrese el nombre del segundo jugador -"<<endl;
    cout<<"- ";
    cin>>*jugador2;
    system ("cls");
}


#endif // PEDIRNOMBRES_H_INCLUDED
