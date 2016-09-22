/*--------------------------------------------------------------------------------- 
 *  FILE : masa_relativista.c
 
 *  DESCRIPCION      - Este codigo calcula los cambios de masa para un cuerpo que 
                       viaja con diferentes velocidades. Los cambios de la velocidad 
                       (dv) estaran determinados por el usuario.

 *  IMPLEMENTACION:  $ gcc -o masa_relativista.x masa_relativista.c -lm
                     $ ./masa_relativista.x <dv>    

 *  Obs: se hara uso de la notacion cientifica.

 *  AUTOR: Alejandro Correa L.
 ---------------------------------------------------------------------------------*/ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define m0 1.0  // Masa en reposo (kg)
#define c 2.998E8 // Velocidad de la luz en el vacio (m/s)


double masa_relativista(double v)
{
  double m;
  m = m0/(sqrt(1-(v*v/(c*c))));
  return m;
}


int main(int argc, char *argv[]){
  double vel,dvel;
  FILE *file;

  if(argc != 2)
   {
     printf("ERROR-----> Usar como:\n"); //Mensaje de error si no se indican los agumentos correctos
     printf("%s <dv>\n", argv[0]);
     exit(0);
   }
    
  file = fopen("masa_relativista.txt","w");
  dvel = atof(argv[1]);
  
  for(vel=0;vel<0.99*c;vel+=dvel)
  {
    fprintf(file,"%e %e %e\n",vel,vel/c,masa_relativista(vel));
  }
  fclose(file);
}