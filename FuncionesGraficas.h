#ifndef FUNCIONESGRAFICAS_H_INCLUDED
#define FUNCIONESGRAFICAS_H_INCLUDED

bool cierreDelJuego() ///FUNCION PARA SALIR DEL JUEGO
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

void ingresoIncorrecto() ///FUNCION EN CASO DE UN INGRESO INCORRECTO
{
    rlutil::setColor(rlutil::RED);
    cout<<"No es valido, por favor, ingrese alguna opcion valida"<<endl;
    rlutil::anykey();
    system ("cls");
    rlutil::setColor(rlutil::WHITE);
}

bool mostrarMenuPrincipal (char matrizTablero[][7],int nfilas, int ncol) ///FUNCION PARA MOSTRAR EL MENU PRINCIPAL
{
    char ingresoMenu;
    cout<<endl;
    rlutil::setColor(rlutil::CYAN);
    rlutil::locate(3, 3);
    cout << "  _____   __    __   ______   ________   ______   ______      ______   _    _      ______   ______   _  _   ______   "<<endl;
    rlutil::locate(3, 4);
    cout << " |  ___| |  |  |  | |  __  | |__    __| |  __  | |  __  |    |  ____| | |  | |    |  __  | |  __  | | || | |  __  | "<<endl;
    rlutil::locate(3, 5);
    cout << " | |     |  |  |  | | |__| |    |  |    | |__) | | |  | |    | |___   |  | | |    | |__) | | |__| | |_  _| | |__| | "<<endl;
    rlutil::locate(3, 6);
    cout << " | |     |  |  |  | |  __  |    |  |    |  __  / | |  | |    |  ___|  |   /  |    |  __  / |  __  |  |  |  |  __  | "<<endl;
    rlutil::locate(3, 7);
    cout << " | |___  |  |__|  | | |  | |    |  |    | |  | | | |__| |    | |____  |      |    | |  | | | |  | |  |  |  | |  | | "<<endl;
    rlutil::locate(3, 8);
    cout << " |_____| |________| |_|  |_|    |__|    |_|  |_| |______|    |______| |__||__|    |_|  |_| |_|  |_|  |__|  |_|  |_| "<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    rlutil::locate(1, 11);
    rlutil::setColor(rlutil::BLUE);
    cout<<"========================================================================================================================"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    rlutil::locate(46, 13);
    cout<<R<<"->"<<RESET<<" Seleccione [1] para jugar "<<R<<"<- "<<RESET<<endl;
    rlutil::locate(29, 14);
    cout<<R<<"->"<<RESET<<" Seleccione [2] para ver los objetivos y las reglas del juego "<<R<<"<- "<<RESET<<endl;
    rlutil::locate(46, 15);
    cout<<R<<"->"<<RESET<<" Seleccione [0] para salir "<<R<<"<- "<<RESET<<endl;
    cout<<endl;
    rlutil::locate(1, 17);
    rlutil::setColor(rlutil::BLUE);
    cout<<"========================================================================================================================"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout<<endl;
    rlutil::locate(58, 19);
    cout<<R<<"-> "<<RESET;
    rlutil::locate(62, 19);
    cout<<R<<" <-"<<RESET;
    rlutil::locate(61, 19);
    cin>>ingresoMenu;
    system("cls");
    string jugador1;
    string jugador2;

        switch(ingresoMenu) //INICIO DEL SWITCH DE OPCIONES
        {
        case '1': //INICIAR JUEGO

            system ("cls");

            cargarMatrizCuadricula(matrizTablero, nfilas, ncol);



            logicaDelJuego(matrizTablero, nfilas, ncol);

            system ("cls");

            return 1;

            break;

        case '2': //MOSTRAR REGLAS Y OBJETIVOS

            mostrarReglas();

            volverAlMenu();
            system ("cls");

            break;

        case '0': //CERRAR EL JUEGO
            cierreDelJuego();
            return 0;
            break;

        default:

            ingresoIncorrecto();

            break;
        }

}


void cargarMatrizCuadricula (char matrizTablero[][7],int nfilas, int ncol) ///FUNCION PARA CARGAR LA MATRIZ CON GUIONES
{
    //colocar todas las posiciones de la matriz = '-'
    for (int i=0; i<nfilas; i++)
    {
        for (int x=0; x<ncol; x++)
        {

            matrizTablero[i][x]= '-';

        }
    }

}

void mostrarCuadricula(char m [][7]) ///FUNCION PARA MOSTRAR CUADRICULA DE JUEGO
{

    rlutil::locate(38, 3);
    cout << "|   |  "<<R<<"1"<<RESET<<"  |  "<<R<<"2"<<RESET<<"  |  "<<R<<"3"<<RESET<<"  |  "<<R<<"4"<<RESET<<"  |  "<<R<<"5"<<RESET<<"  |  "<<R<<"6"<<RESET<<"  |  "<<R<<"7"<<RESET<<"  |" << endl;
    rlutil::locate(38, 4);
    cout << "+---+-----+-----+-----+-----+-----+-----+-----+" << endl;
    rlutil::locate(38, 5);
    cout << "| "<<R<<"1"<<RESET<<" |  "<<m[5][0]<<"  |  "<<m[5][1]<<"  |  "<<m[5][2]<<"  |  "<<m[5][3]<<"  |  "<<m[5][4]<<"  |  "<<m[5][5]<<"  |  "<<m[5][6]<<"  |" << endl;
    rlutil::locate(38, 6);
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    rlutil::locate(38, 7);
    cout << "| "<<R<<"2"<<RESET<<" |  "<<m[4][0]<<"  |  "<<m[4][1]<<"  |  "<<m[4][2]<<"  |  "<<m[4][3]<<"  |  "<<m[4][4]<<"  |  "<<m[4][5]<<"  |  "<<m[4][6]<<"  |" << endl;
    rlutil::locate(38, 8);
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    rlutil::locate(38, 9);
    cout << "| "<<R<<"3"<<RESET<<" |  "<<m[3][0]<<"  |  "<<m[3][1]<<"  |  "<<m[3][2]<<"  |  "<<m[3][3]<<"  |  "<<m[3][4]<<"  |  "<<m[3][5]<<"  |  "<<m[3][6]<<"  |" << endl;
    rlutil::locate(38, 10);
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    rlutil::locate(38, 11);
    cout << "| "<<R<<"4"<<RESET<<" |  "<<m[2][0]<<"  |  "<<m[2][1]<<"  |  "<<m[2][2]<<"  |  "<<m[2][3]<<"  |  "<<m[2][4]<<"  |  "<<m[2][5]<<"  |  "<<m[2][6]<<"  |" << endl;
    rlutil::locate(38, 12);
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    rlutil::locate(38, 13);
    cout << "| "<<R<<"5"<<RESET<<" |  "<<m[1][0]<<"  |  "<<m[1][1]<<"  |  "<<m[1][2]<<"  |  "<<m[1][3]<<"  |  "<<m[1][4]<<"  |  "<<m[1][5]<<"  |  "<<m[1][6]<<"  |" << endl;
    rlutil::locate(38, 14);
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    rlutil::locate(38, 15);
    cout << "| "<<R<<"6"<<RESET<<" |  "<<m[0][0]<<"  |  "<<m[0][1]<<"  |  "<<m[0][2]<<"  |  "<<m[0][3]<<"  |  "<<m[0][4]<<"  |  "<<m[0][5]<<"  |  "<<m[0][6]<<"  |" << endl;
    rlutil::locate(38, 16);
    cout << "+---+-----+-----+-----+-----+-----+-----+-----+" << endl;


}

void pedirNombres(string *jugador1, string *jugador2) ///FUNCION PARA PEDIR NOMBRES
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

void mostrarReglas() ///FUNCION PARA MOSTRAR REGLAS Y OBJETIVOS DEL JUEGO
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

bool volverAlMenu () ///FUNCION PARA VOLVER AL MENU PRINCIPAL
{
    char ingresoMenu;
    rlutil::locate(1, 25);
    cout<<"========================================================================================================================"<<endl;
    rlutil::locate(42, 26);
    cout<<"-> Para volver al menu, ingrese [1] <-"<<endl;
    rlutil::locate(1, 27);
    cout<<"========================================================================================================================"<<endl;
    rlutil::locate(57, 28);
    cout<<"- ";
    rlutil::locate(59, 28);
    cin>>ingresoMenu;
    system ("cls");

    switch(ingresoMenu)
    {
    case '1':

        return 1;
        break;

    default:
        ingresoIncorrecto();

        break;

    }
}


void mostrarAnimacionbienvenida() ///FUNCION PARA MOSTRAR LA ANIMACION DE BIENVENIDA
{
    int i;
    rlutil::hidecursor();
    rlutil::setColor(rlutil::WHITE);
    rlutil::locate(50, 13);
    cout<<"C";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cu";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cua";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuat";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatr";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro ";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro e";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en ";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en R";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en Ra";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en Ray";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en Raya";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en Raya.";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en Raya..";
    Sleep(150);
    system("cls");
    rlutil::locate(50, 13);
    cout<<"Cuatro en Raya...";
    Sleep(150);
    system("cls");

    for (i=1; i<3; i++) //FOR PARA QUE SE REPITA DOS VECES MAS
    {
        rlutil::locate(50, 13);
        cout<<"Cuatro en Raya";
        Sleep(150);
        system("cls");
        rlutil::locate(50, 13);
        cout<<"Cuatro en Raya.";
        Sleep(150);
        system("cls");
        rlutil::locate(50, 13);
        cout<<"Cuatro en Raya..";
        Sleep(150);
        system("cls");
        rlutil::locate(50, 13);
        cout<<"Cuatro en Raya...";
        Sleep(150);
        system("cls");
    }

}

#endif // FUNCIONESGRAFICAS_H_INCLUDED
