//to check if a triangle is valid or not and determine its type.

#include <stdio.h>
int main()
{float s1,s2,s3;
  printf("enter 3 sides:");
  scanf("%f%f%f",&s1 ,&s2, &s3);
  if (s1+s2>s3 || s2+s3>s1 || s3+s1>s2){
    printf("Valid triangle \n");
     if (s1==s2 &&  s2==s3 &&  s3==s1){
       printf("Equilateral triangle ");
     }
     else if (s1==s2 || s2==s3 || s3==s1) {
       printf("isosceles triangle");
     }
     else{
       printf("scalene traingle");
     }
 }
  else {
    printf("not valid triangle");
   }
  return 0;
}


 
