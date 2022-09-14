#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* code */
  // a b c a b c a b c
  // 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 ...
  long a = 1, b = 1;
  long c = a + b;
  long answer = 0;
  while(c<4000000){
      if(c%2==0){
        //printf("%ld\n",b);
        answer = answer + c;
      }
      a = b + c;
      b = c + a;
      c = a + b;
  };
  printf("The sum of even fibonacci numbers is: %ld\n",answer);
  return 0;
}
