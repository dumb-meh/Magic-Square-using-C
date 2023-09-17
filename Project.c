#include<stdio.h>

int main ()
{


int y [3][3],i,j,sumd1=0,sumd2=0,f,sumr=0,sumc=0;


printf ("Enter matrix elements..\n");

for (i=0;i<3;i++) {

    for (j=0; j<3;j++){
        scanf("%d",&y [i][j]);

    }
}

printf ("\n Matrix is..\n");

for (i=0;i<3; i++) {

    for (j=0; j<3;j++){
        printf("%3d", y [i][j]);

    }
    printf("\n");
}

for (i=0;i<3; i++) {

    for (j=0; j<3;j++){
        if (i==j) {

            sumd1=sumd1+y[i][j ]; // sum of  main diagonal
        }

        if (i+j==2)
        {
            sumd2=sumd2+y[i][j]; //sum of second diagonal
        }

    }
}

     if (sumd1!=sumd2){
        f=1; // we are gonna use this kind of like a switch
     }
    else{
        for (i=0;i<3; i++) {

          sumc=0;
          sumr=0;

         for (j=0; j<3;j++){
                sumc=sumc+y[j][i];
                sumr=sumr+y[i][j];




      if (sumc!=sumd1){
        f=1;
      }

      else if (sumr!=sumd1){

        f=1;
      }

      else {
        f=0;
      }
        }

    } }

    if (f==0) {

        printf ("\n It's a magic square \n");
    }
else if (f==1){

    printf("\n It's not a magic square \n");
}
}

