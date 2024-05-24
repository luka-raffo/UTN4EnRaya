#ifndef VOLVEROSALIR_H_INCLUDED
#define VOLVEROSALIR_H_INCLUDED

///FUNCION PARA VOLVER AL MENU O SALIR DEL JUEGO
char VolverOSalir ()
{
    char ingresoMenu;
    cout<<"-> Para volver al menu, ingrese [1] <-"<<endl;
    cout<<"======================================"<<endl;
    cout<<"Mi opcion es la - ";
    cin>>ingresoMenu;
    system ("cls");

    switch(ingresoMenu)
    {
    case '1':
        mostrarAnimacionbienvenida();
        return '1';
        break;

    default:
        ingresoIncorrecto();

        break;

    }
}


#endif // VOLVEROSALIR_H_INCLUDED
