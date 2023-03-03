#include <stdio.h>

int main( void )
{
  printf( "%s\n", "Hello World." );

  char* p = (char*)malloc( sizeof(char) * 100 );
  strcpy(p, "AAA");

  free(p);

  return 0;
}
