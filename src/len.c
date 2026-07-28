#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: len string [string2]...\n");
    exit(1);
  }

  for (int i = 1; i <= (argc - 1); i++) {
    int count = 0;

    for (int j = 0; argv[i][j] != '\0'; j++) {
      if ((argv[i][j] & 0xC0) != 0x80) count++;
    }
    printf("%d\n", count);
  }
}
