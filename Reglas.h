#ifndef REGLAS_H_INCLUDED
#define REGLAS_H_INCLUDED

void mostrarReglas()
{
    system ("cls");
    rlutil::setColor(rlutil::CYAN);
    rlutil::locate(50, 1);
    cout<<"[ OBJETIVOS DEL JUEGO ]"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    cout<<"- El principal objetivo es ser el primero en alinear cuatro de tus fichas consecutivas en cualquier direccion:\n  horizontal, vertical o diagonal."<<endl;
    cout<<"- Ademas de buscar formar tu propia linea de cuatro, es crucial bloquear los intentos del oponente de formar su propia \n  linea de cuatro."<<endl;
    cout<<"- Planificar movimientos futuros y anticipar las jugadas del oponente es clave para crear oportunidades de victoria y \n  evitar que el oponente logre conectar cuatro fichas primero."<<endl;
    cout<<"- Controlar las columnas centrales del tablero puede ser ventajoso, ya que ofrece mas oportunidades para conectar \n  cuatro en diferentes direcciones."<<endl;
    cout<<endl;
    cout<<"========================================================================================================================"<<endl;
    cout<<endl;
    rlutil::setColor(rlutil::CYAN);
    rlutil::locate(50, 13);
    cout<<"[ REGLAS DEL JUEGO ]"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    cout<<"- El juego es para dos jugadores."<<endl;
    cout<<"- El tablero es una cuadricula de 7 columnas y 6 filas."<<endl;
    cout<<"- Cada jugador tiene fichas de una forma diferente (cruz y circulo)"<<endl;
    cout<<"- Se decide aleatoriamente o por mutuo acuerdo quien empieza primero."<<endl;
    cout<<"- Los jugadores se turnan para soltar una ficha en una de las columnas del tablero, y la ficha cae a la posicion mas \n  baja disponible en esa columna."<<endl;
    cout<<"- El primer jugador en conectar cuatro fichas consecutivas gana el juego."<<endl;
    cout<<"- Si todas las posiciones del tablero estan llenas y ningun jugador ha logrado conectar cuatro fichas, el juego \n  termina en empate."<<endl;
    cout<<"- Las fichas no pueden ser removidas ni movidas una vez colocadas."<<endl;
    cout<<"========================================================================================================================"<<endl;

}

#endif // REGLAS_H_INCLUDED
