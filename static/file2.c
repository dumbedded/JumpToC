#include <stdio.h>

// This variable has the same name, but it is global and does not have static
// visibility, so it can be accessed globally!
struct Data data = {100, 200};  // Global variable in file2.c

void print_data() { printf("file2 data: %d, %d\n", data.a, data.b); }

int main() {
  print_data();  // Will print data from file2.c (100, 200)

  // Calling function from file1.c that modifies data
  modify_data(3, 4);  // Modifies "file1" version of data

  print_data();  // Will still print data from file2.c (100, 200) because file1
                 // data is static!
  return 0;
}
