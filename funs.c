#include "funs.h"

// I just like adding length. Seems more safe.
int average(int *arr, int length) {
  int i, result = 0;
  for (i = 0; i < length; i++) {
    result += *(arr + i);
  }
  return result;
}

// Assumes the user is imputing correct lengths.
void copy(int *arr, int *ray, int length) {
  int i;
  for (i = 0; i < length; i++) {
    *(ray + i) = *(arr + i);
  }
}

// assumes the a NULL at the end
int len(char *word) {
  int i = 0;
  while (word[i]) {
    i++;
  }
  return i;
}
