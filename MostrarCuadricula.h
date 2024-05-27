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

void mostrarCuadricula()
{
    //47
    //14
    cout << "    | 1   | 2   | 3   | 4   | 5   | 6   | 7   |" << endl;
    cout << "+---+-----+-----+-----+-----+-----+-----+-----+" << endl;
    cout << "| 1 |     |     |     |     |     |     |     |" << endl;
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    cout << "| 2 |     |     |     |     |     |     |     |" << endl;
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    cout << "| 3 |     |     |     |     |     |     |     |" << endl;
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    cout << "| 4 |     |     |     |     |     |     |     |" << endl;
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    cout << "| 5 |     |     |     |     |     |     |     |" << endl;
    cout << "|---|-----|-----|-----|-----|-----|-----|-----|" << endl;
    cout << "| 6 |     |     |     |     |     |     |     |" << endl;
    cout << "+---+-----+-----+-----+-----+-----+-----+-----+" << endl;
    system ("pause");
    system ("cls");
}

#endif // MOSTRARCUADRICULA_H_INCLUDED
