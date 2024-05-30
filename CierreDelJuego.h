#ifndef CIERREDELJUEGO_H_INCLUDED
#define CIERREDELJUEGO_H_INCLUDED

bool cierreDelJuego()
{

    rlutil::setColor(rlutil::RED);
    cout<<"El juego se va a cerrar..."<<endl;
    rlutil::setColor(rlutil::WHITE);
    system ("pause");
    system ("cls");
    rlutil::setColor(rlutil::CYAN);
    cout<<"¡Hasta la proxima!"<<endl;
    return 0;

}

#endif // CIERREDELJUEGO_H_INCLUDED
