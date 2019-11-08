// decode the following messages encryped using a shift cipher
// msg1: hvwgwgxighhvstwfgheisghwcbrcbhpshvfckbcttpmhvsoddsofobqsctoe
// msg2: padhzaolilzavmaptlzpadhzaoldvyzavmaptlz
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  int i;
  int j;
  // char *message = "hvwgwgxighhvstwfgheisghwcbrcbhpshvfckbcttpmhvsoddsofobqsctoe";
  char *message = "padhzaolilzavmaptlzpadhzaoldvyzavmaptlz";

  printf("======> Brute force caesar <======\n");
  int len = strlen(message);
  for (i = 0; i < 26; i++)
  {
    printf("shift: %d\n", i);
    for (j = 0; j < len; j++)
    {
      int shift = 26 - i;
      printf("%c", ((message[j] - 'a') + shift) % 26 + 'a');
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
