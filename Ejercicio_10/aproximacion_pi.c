/*--------------------------------------------------------------------------------- 
 *  FILE : aproximacion_pi.c
 
 *  DESCRIPCION      - Este codigo calcula el el numero pi de dos maneras diferentes
                       teniendo en cuenta el numero de terminos que el usuario desee.

 *  IMPLEMENTACION:  $ gcc -o aproximacion_pi.x aproximacion_pi.c -lm 
                     $ ./aproximacion_pi.x <#terminos>     

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double forma1(double nterm) // Primera forma (forma recurrente)
{
  double ant,prim,f1;
  int i;
  
  ant = sqrt(2.0); // Definiciondel primer termino
  prim = 0.5*ant;
  
  
  for(i=1;i<=nterm;i++)
  {
    ant = sqrt(2+ant);
    prim = 0.5*prim*ant;
  }
  f1=2/prim;
  return f1;
}

double forma2(double nterm) // Segunda forma (forma de series)
{
  double sig,ant,f2;
  int n;
  
  ant = 1.0; // Inicializacion de variables
  sig = 1.0;
  
  for(n=1;n<=nterm;n++)
  {
    sig = sig + pow(-1,n)/(2*n+1);
  }
  f2=4*sig;
  return f2;
}



int main(int argc, char *argv[])
{

  double nterms;
  if(argc != 2)
    {
      printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <#terminos>\n", argv[0]);
      exit(0);
    }
  nterms = atof(argv[1]);
  
  printf("\n Forma 1 : %lf\n",forma1(nterms));
  printf("\n Forma 2 : %lf\n",forma2(nterms));
  
  return 0;
}
