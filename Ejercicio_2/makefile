CC=gcc 

CFLAGS=-c -O3 
LFLAGS=-lm  


ejecuta: Taylor-cos
	./$<.x  
Taylor-cos: Taylor-cos.c
	  echo "Working...  $@.c"
	  $(CC) $(CFLAGS) $@.c -o $@.o
	  $(CC) $@.o $(LFLAGS) -lm -o $@.x
clean:

	rm -rf $(PROGRAM)
	rm -rf *-
	rm -rf *.out	
	rm -rf *#
	rm -rf *.o	
	rm -rf *.a	
	rm -rf *.so	
	rm *.x	
