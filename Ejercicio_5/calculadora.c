/*--------------------------------------------------------------------------------- 
 *  FILE : calculadora.c
 
 *  DESCRIPCION      - Este codigo se una para realizar operaciones aritmeticas basicas
                      entre dos numeros reales.

 *  IMPLEMENTACION:  $ gcc -o calculadora.x calculadora.c 
                     $ calculadora.x <primer operando> <OPERADOR> <segundo operando>    

 *  AUTOR: Alejandro Correa L.

--------------------------------------------------------------------------------- */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



double suma(double a, double b) // Funcion para calcular la suma
{
  double sum;
  
  sum = a + b;

  return(sum);

}

double resta(double a, double b) // Funcion para calcular la resta
{
  double res;
  
  res = a - b;

  return(res);
}

double division(double a, double b) // Funcion para calcular la division
{
  double coci;

  coci = a / b;

  return(coci);
}

double multiplicacion(double a, double b) // Funcion para calcular la multiplicacion
{
  double mult;

  mult = a * b;

  return(mult);
}

int main(int argc, char *argv[]) // Programa principal
{
 
  double a,b,op;
  char *c;
  
  if(argc != 4)
    {
      printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <primer operando> <OPERADOR> <segundo operando>\n", argv[0]);
      exit(0);
    }  
  
  a = atol(argv[1]);
  b = atol(argv[3]);
  c = argv[2];


  if(!strcmp(c,"suma"))
    {
      op=suma(a,b);
    }
    
  else if(!strcmp(c,"resta"))
    {
      op=resta(a,b);
    }

  else if(!strcmp(c,"multiplicacion"))
    {
      op=multiplicacion(a,b);
    }
  
  else if(!strcmp(c,"division"))
    {
      op=division(a,b);
         }

  printf("\n EL resultado %s de %lf  entre %lf es %lf\n",c,a,b,op);
  
  return 0;

}
