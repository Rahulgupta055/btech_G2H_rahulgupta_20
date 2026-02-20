
#include <stdio.h>
int main()
{char op;
float a,b,c,d,e,f;
printf("enter operands:\n");
scanf("%f%f",&a ,&b);
printf("enter operator (+,-,*,/):");
scanf(" %c", &op);
switch (op) {
    case '+': 
    c=a+b;
    printf("sum is%f",c);
    break;
    case '-': 
    d=a-b;
    printf("sum is%f",d);
    break;
    case '*': 
    e=a*b;
    printf("sum is%f",e);
    break;
    case '/': 
    f=a/b;
    printf("sum is%f",f);
    break;
    default:
       printf("invalid operator");
    }
    return 0;
}

