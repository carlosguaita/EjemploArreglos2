#include <stdio.h>

void imprimirMatriz(int matriz[][3],int n, int m, char nombreMatriz[]);

int main (int argc, char *argv[]) {

    int a[4][3]={{2,3,5},{3,2,5},{5,4,2},{7,5,3}};

    int b[4][3]={{5,3,6},{4,6,3},{5,2,5},{5,3,2}};

    int c[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        } 
    }

    int d[4][3]={{2,3,5},{3,2,5},{5,4,2},{7,5,3}};
    int e[3][3]={{5,3,6},{4,6,3},{5,2,5}};
    int f[4][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                f[i][j]+=d[i][k]*e[k][j];
            }  
        }
    }
    
    imprimirMatriz(d,4,3,"d");
    imprimirMatriz(e,3,3,"e");
    imprimirMatriz(f,4,3,"f");


    //imprimirMatriz(a,4,3,"a");
    //imprimirMatriz(b,4,3,"b");
    //imprimirMatriz(c,4,3,"c");

    return 0;
}

void imprimirMatriz(int matriz[][3],int n, int m, char nombreMatriz[]){
    printf("Matriz %s:\n",nombreMatriz);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n"); 
    }
}



