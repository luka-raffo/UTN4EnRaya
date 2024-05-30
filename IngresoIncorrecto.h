#ifndef INGRESOINCORRECTO_H_INCLUDED
#define INGRESOINCORRECTO_H_INCLUDED

void ingresoIncorrecto()
{
    rlutil::setColor(rlutil::RED);
    cout<<"No es valido, por favor, ingrese alguna opcion valida"<<endl;
    rlutil::anykey();
    system ("cls");
    rlutil::setColor(rlutil::WHITE);
}


#endif // INGRESOINCORRECTO_H_INCLUDED
