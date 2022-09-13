#include <stdio.h>

int main() {

  FILE *fp;
  fp = fopen("/Users/edilsonsuame/Documents/Perl_Cpp_Ruby/C/Problem1/Multiples.txt", "w");// "w" means that we are going to write on this file

  long limit = 1000;
  long i = 3;
  long total = 0;

  while (i < limit) {
    /* code */
    if ((i % 3 == 0) || (i % 5 == 0)) {
      /* code */
      printf("%ld\n",i);
      fprintf(fp, "Multiple of 3 or 5: %ld\n", i);
      total+=i;
    }

    i++;
  }
  fprintf(fp, "Sum of all multiples of 3 or 5: %ld\n", total);
  fclose(fp); //Don't forget to close the file when finished
  printf("The sum of the multiples of 3 or 5 below 10000 is : %ld", total);
}
