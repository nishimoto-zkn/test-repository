#include <stdio.h>

int main( void )
{
  printf( "%s\n", "Hello World." );

  char* p = new char[100];
  strcpy(p, "AAA");

  return 0;
}
