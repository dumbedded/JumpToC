#include <stdio.h>

struct Data {
  int a;
  int b;
};

static struct Data data = {10, 20};  // Static object in file1.c

void print_data() { printf("file1 data: %d, %d\n", data.a, data.b); }

void modify_data(int x, int y) {
  data.a = x;
  data.b = y;
}
