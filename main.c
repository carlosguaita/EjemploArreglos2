#include <stdio.h>

int main (int argc, char *argv[]) {

    double numeros[5] = {34.21,43.23,65.34,65.3,654};

    for (int i = 0; i < 5; i++)
    {
        printf("el elemento en %d es %.2lf\n",i,numeros[i]);
    }


    printf("-----------------------------\n");
    numeros[2]=0;
    numeros[4]=100;

    for (int i = 0; i < 5; i++)
    {
        printf("el elemento en %d es %.2lf\n",i,numeros[i]);
    }

    double tem = 100*numeros[0];

    printf("el resultado de la operacion es %.2lf\n",tem);


    

    return 0;
}