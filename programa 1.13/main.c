#include <stdio.h>
 /* Aplicacion de operadores. */

void main (void)
 {
      int i = 5, j = 4, k, l, m;

      k = !i * 3 + --j * 2 - 3;
      printf("\nEl valor de k es: %d" , k);

      l = ! (!i || l && 0) && 1;
      printf("\nEl valor de 1 es: %d" , 1);

      m = (k = (! (12 > 10)), j = (10 || 0) && k, (! (k || j)));
      printf("\nEl valor de m es: %d", m);
 }

