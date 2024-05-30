#ifndef MOSTRARCUADRICULA_H_INCLUDED
#define MOSTRARCUADRICULA_H_INCLUDED

void cargarMatrizCuadricula (char matrizTablero[][7],int nfilas, int ncol){
    for (int i=0; i<nfilas; i++)
    {
        for (int x=0; x<ncol; x++)
        {

            matrizTablero[i][x]= '-';



        }
    }

}

void mostrarCuadricula(char m [][7])
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

#endif // MOSTRARCUADRICULA_H_INCLUDED
