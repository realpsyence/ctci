#include <stdio.h>

int main(int argc, char ** argv) {
  if (argc == 2) {
    int i = 0;
    while (argv[1][i] != '\0') {
      for (int j = 0; j < i; j++){
        if (argv[1][j] == argv[1][i]){
          printf("%c, %c", argv[1][j], argv[1][i]);
          return 1;
        }
      }
      i++;
    }
    return 0;
  }
  else {
    printf("Please call with string to check as first parameter.");
  }
}
