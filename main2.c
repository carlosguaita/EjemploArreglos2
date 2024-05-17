#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombres[5][20]={"angel","edgar","victoria","esteban","eduardo"};

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese el nombre %d: ",i);
        scanf("%s",&nombres[i]);
    }

    printf("Los nombres ingresados son: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n",nombres[i]);
    }
    
    

    return 0;
}