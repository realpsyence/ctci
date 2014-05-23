#include <stdio.h>

int main(int argc, char ** argv) {
  if (argc == 2) {
    int i = 0;
    char sentence[128];
    while (argv[1][i] != '\0') {
      if (i == 0) {
        sentence[0] = argv[1][i];
      }
      else {
        for (int j = i; j >= 0; j--){
          if (sentence[j] == argv[1][i]){
            printf("%c, %c", sentence[j], argv[1][i]);
            return 1;
          }
        }
        sentence[i] = argv[1][i];
      }
      i++;
    }
    return 0;
  }
  else {
    printf("Please call with string to check as first parameter.");
  }
}
