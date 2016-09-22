/*--------------------------------------------------------------------------------- 
 *  FILE : funcion_evaluada.c
 
 *  DESCRIPCION      - Este codigo evalua la funcion f(x)=sin(x)*ln(2*x+1)*sinh(x)
                     en el intervalo [0,10] con un paso dx definido por el usuario.

 *  IMPLEMENTACION:  $ gcc -o funcion_evaluada.x funcion_evaluada.c
                     $ ./funcion_evaluada.x <dx>   

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double funcion(double x) // Definicion  de la funcion
{
  double a;
  
  a=(sin(x)*log(2*x+1)*sinh(x));
  
  return a; 
}

void lectura_archivo(void)
{
  double f,x;
  FILE *fin,*fout;
  
  fin = fopen("datos-entrada-3colum.txt","r"); // Apertura del archivo de entrada

  fout = fopen("datos-salida-2colum.txt","w"); // Apertura del archivo del archivo de salida

  while(!feof(fin) ) // Mientras que no se este en el final del archivo de entrada, se escribe en el archivo de salida
  {
    fscanf(fin,"%*d %lf %lf",&x,&f); // Lectura de las componentes del archivo de entrada
    fprintf(fout,"%lf %lf\n",f,x); // Escritura en el archivo de salida
  }
  fclose(fin);
  fclose(fout);
}

int main(int argc, char *argv[])
{
  
  double x,dx,f;
  int i;
  FILE *file;

  dx = atof(argv[1]);

  file = fopen("datos-entrada-3colum.txt","w"); // Crea el archivo de entrada

  for(i=0;i<=(10/dx);i++) // Llena el archivo previamente creado
  {  
    f = funcion(i*dx);  
    fprintf(file,"%d %lf %lf\n",i,i*dx,f);
  }

  fclose(file);

  lectura_archivo();
  
  return 0;
}

