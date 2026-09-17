#include <stdio.h>

#include "askname.h"


int main(int argc, char** argv)
{
  char first[255], last[255];
  askname(first, last);

  printf("Hello, %s %s!\n", first, last);
  printf("Add fork to main");
  return 0;
}

// Saveliy was here 0_o
