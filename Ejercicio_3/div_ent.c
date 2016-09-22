/*--------------------------------------------------------------------------------- 
 *  FILE : div_ent.c
 
 *  DESCRIPCION      - Este codigo informa sobre el numero de veces que un numero entero (dividendo)
                       puede ser dividido por dos (division entera).

 *  IMPLEMENTACION:  $ gcc -o div_ent.x div_ent.c 
                     $ ./div_ent.x <dividendo>     

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>


int divisor=2,r,c; // Variables globales


int resto(int a) // Funcion que calcula el resto de la division de dos numeros enteros positivos
{
  r=a%divisor;
  return(r);
}

int cociente(int a) // Funcion que calcula el cociente de tal division 
{
 c=a/divisor;
 return(c);
}

int main(int argc, char *argv[]) // Programa principal
{
  int d,n;
  

  if(argc != 2)
    {
      printf("\n ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <dividendo>\n", argv[0]);
      exit(0);
    }  

  d = atoi(argv[1]);
  r=resto(d); // Usa las funciones resto y cociente para el dato ingresado
  c=cociente(d);
  n=1;  //Variable que se usara en el loop while

  
    
  while(r==0) // condicion para los numeros pares
     {
       r=resto(c);
       c=cociente(c);
       n+=1;
     }


  printf("El numero de veces por las cuales el dividendo %d se puede dividir por 2 es %d\n",d,n-1); // Imprime resultado

   
   return 0;

}
