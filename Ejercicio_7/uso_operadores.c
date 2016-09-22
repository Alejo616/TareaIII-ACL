/*--------------------------------------------------------------------------------- 
 *  FILE : uso_operadores.c
 
 *  DESCRIPCION      - Este codigo muestra la diferencia que existe entre el ordenamiento
                       de los operadores (precedencia) en operaciones aritmeticas.

 *  IMPLEMENTACION:  $ gcc -o uso_operadores.x uso_operadores.c 
                     $ ./uso_operadores.x <angulo en grados> <valor a, entero> <valor b, entero>   

 *  Obs: el angulo indica el argumento de entrada de las funciones trigonometricas (debe ser en grados). Ver README.txt para 
         la solucion de los literales del ejercicio 7.

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159265


// Funciones dadas en el enunciado
 
double funcion1(double x, int a, int b)
{
  double r;
  r = sin(x) + cos(x)*0.5*a + b;
  return r;
}
double funcion2(double x, int a, int b)
{
  double p;
  p = sin(x) + cos(x)*0.5*(a + b);
  return p;
}
double funcion3(double x, int a, int b)
{
  double q;
  q = (sin(x) + cos(x)*0.5)*a + b;
  return q;
}
double funcion4(double x, int a, int b)
{
  double t;
  t = ( (sin(x) + cos(x))*0.5)*(a + b);
  return t;
}


int main(int argc, char *argv[])
{
  double x,X;
  int a,b;  
  if(argc != 4)
    {
      printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <angulo> <# de iteraciones>\n", argv[0]);
      exit(0);
    }

  a=atoi(argv[2]);
  b=atoi(argv[3]);
  x = atof(argv[1]);
  X=x*pi*0.005555555555;  // Conversion de grados a radianes
  

  printf("\n Resultados:  \n\n");
  printf(" Funcion 1: %f\n",funcion1(X,a,b));
  printf(" Funcion 2: %f\n",funcion2(X,a,b));
  printf(" Funcion 3: %f\n",funcion3(X,a,b));
  printf(" Funcion 4: %f\n",funcion4(X,a,b));
  
  return 0;
}
 
