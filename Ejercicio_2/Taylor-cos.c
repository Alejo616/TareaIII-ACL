/*--------------------------------------------------------------------------------- 
 *  FILE : Taylor-cos.c
 
 *  DESCRIPCION      - Este codigo calcula el coseno de un angulo dado, en linea de 
                       comando, mediante una expasion en series de Taylor alrededor 
                       del punto x=0.

 *  IMPLEMENTACION:  $ gcc -o Taylor-cos.x Taylor-sin.c 
                     $ ./Taylor-sin.x <angulo> <# de iteraciones>    

 *  Obs: el angulo debe estar en grados. Hace uso de la funcion funciones_utiles.c que se
    que se encuentra en el mismo fichero

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
#include"funciones_utiles.c"
#define pi 3.14159265 // define el valor de pi a usar


int main(int argc, char *argv[])
{
  int ang,n;
  double d,X;

  if(argc != 3)
    {
      printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <angulo> <# de iteraciones>\n", argv[0]);
      exit(0);
    }

  ang = atof(argv[1]); // Definicion de que tipo de datos son los argumentos de entrada
  n = atoi(argv[2]);
  
  
  X=ang*pi*0.005555555555;  // Conversion de grados a radianes
  d= coseno(X,n);
  printf("El valor de coseno(%d) es %lf.\n",ang,d);
   
return 0;
}
