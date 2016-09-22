/*--------------------------------------------------------------------------------- 
 *  FILE : calculo_factorial.c
 
 *  DESCRIPCION      - Este codigo calcula el coseno de un angulo dado, en linea de 
                       comando, mediante una expasion en series de Taylor alrededor 
                       del punto x=0.

 *  IMPLEMENTACION:  $ gcc -o calculo_factorial.x calculo_factorial.c -lm
                     $ ./calculo_factorial.x <numero>     


 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"funciones_utiles.c"

 int main(int argc, char *argv[])
 {
     
    int n;
    double a;
    
    if(argc != 2)
    {
      printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <numero>\n", argv[0]);
      exit(0);
    }
    
    
    n=atof(argv[1]);
     
    a=factorial(n);
     
    printf("El resultado es %d!=%lf\n",n,a);
         
     return 0;
}
