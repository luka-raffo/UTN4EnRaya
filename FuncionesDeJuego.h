if (ingresoMaquina==7)
    {
        ingresoMaquina=0;
    }

    //revisar
    for (int i=0; i<ncol-1; i++)
    {
        if(matrizTablero[i][ingresoMaquina] == '-')
        {
            matrizTablero[i][ingresoMaquina]= 'X';
            break;

        }

    }

    for(int i=0; i<ncol; i++)
    {
        if(matrizTablero[5][i] != '-' && ingresoMaquina==i+1)
        {
            ingresoMaquina=rand()%7+1;
            matrizTablero[i][ingresoMaquina] = 'X';
        }
    }
