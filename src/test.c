#include "utf8len.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int i;
    for (i = 1; i < argc; i++) {
      printf("%ld, ", utf8len(argv[i]));
    }
    printf("\b\b \n");
    return 0;
  }
  printf("Too less argument!\n");
  return 0;
}
