// using the affine cipher with encryption keys a = 15
// and b = 19, encrypt the following plaintext
// packmyboxwithfivedozenliquorjugs
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  int i;
  int a = 15;
  int b = 19;
  char *plaintext = "packmyboxwithfivedozenliquorjugs";
  char cipher;

  printf("======> Affine cipher encryption <======\n");
  int len = strlen(plaintext);
  printf("a: %d b: %d\n", a, b);
  for (i = 0; i < len; i++)
  {
    cipher = ((plaintext[i] - 'a') * a + b) % 26 + 'a';
    printf("%c", cipher);
  }
  printf("\n");
  return 0;
}
