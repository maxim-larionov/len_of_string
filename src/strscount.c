#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "strcount.h"

int *strscnt(unsigned char **words, int word_count) {
  int *result = malloc(word_count * sizeof(int));
  if (!result) return result;
  if (word_count < 2) {
    printf("Usage: len string [string2]...\n");
    exit(1);
  }

  for (int i = 0; i < (word_count); i++) {
    int count = 0;

    for (int j = 0; words[i][j] != '\0'; j++) {
      if ((words[i][j] & 0xC0) != 0x80) count++;
    }
    result[i] = count;
  }
  return result;
}
