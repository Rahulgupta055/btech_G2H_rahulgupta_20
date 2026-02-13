#include <stdio.h>
int main() 
{char w;
  printf("enter the character:");
  scanf("%c",&w);
  if (w=='a' || w == 'e'|| w=='i' || w == 'o'|| w=='u' || w == 'A'|| w=='E' || w == 'I' ||w=='O' || w == 'U'){
    printf("the char is vowel %c \n");
  }else{
    printf("the char is consonant %c \n");
  }
  return 0;
}