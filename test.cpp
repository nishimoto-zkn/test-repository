#include <iostream>
#include <stdio.h>

int main( void )
{
  std::cout << "Hello World!" << std::endl;

  char* p = new char[100];
  strcpy(nullptr, "AAA");

  return 0;
}
