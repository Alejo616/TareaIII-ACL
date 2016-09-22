/*--------------------------------------------------------------------------------- 
 *  FILE : numeros_primos.c
 
 *  DESCRIPCION      - Este codigo imprime en pantalla todos los numeros primos que sean
                       menores que un numero dado por el usuario.

 *  IMPLEMENTACION:  $ gcc -o numeros_primos.x numeros_primos.c 
                     $ ./numeros_primos.x <xmax>     

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char *argv[]){

  int i,j,xmax,cont;
  
  if(argc != 2)
    {
      printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
      printf("%s <xmax>\n", argv[0]);
      exit(0);
    }

  xmax = atoi(argv[1]);
  
  printf("Numeros primos menores que %d: \n",xmax);
  
  for(i=2;i<=xmax;i++)
  {
    cont = 1;
    for(j=2;j<=i;j++)
    {
      if(i%j==0)
	cont = cont + 1;      
    }
    if(cont==2)
      printf("%d ",i);
  }
  
  printf("\n");

  return 0;
}

