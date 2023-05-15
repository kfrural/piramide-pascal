
#include <stdio.h>
void piramide(){
    int i,j;
int matrix[15][15];
    for (i=0; i<15; i++) {
        for (j=0; j<15; j++) {
            matrix[i][j]=0;
        }
    }
    for (i=0; i<15; i++)
    {   matrix[i][0]=1;
    }
    for(i=1; i<15; i++) {
        for (j=1; j<15; j++)  {
            matrix[i][j]=matrix[i-1][j]+matrix[i-1][j-1];
        }
    }
    for (i=0; i<15; i++) {
        for (j=0; j<15; j++) {
            if (matrix[i][j]!=0)
                printf ("%d ",matrix[i][j]);
        }
        printf ("\n");
    }
}
int main ()
{
    piramide();
    return 0;
}
