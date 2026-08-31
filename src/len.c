#include <stddef.h>
signed long long utf8len(unsigned char *str) {
  if (!str) return -1;
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if ((str[i] & 0xC0) != 0x80) count++;
  }

  return count;
}
