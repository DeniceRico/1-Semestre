#include <stdio.h>

int main()
{
   int contador;

   printf( "\n   " );

   contador = 1; /* Inicializaci�n del contador */
   while ( contador <= 10 )        /* Condici�n */
   {
      printf( "%d ", contador );   /* Salida */
      contador++;    /* Incremento del contador */
   }

   return 0;
}
