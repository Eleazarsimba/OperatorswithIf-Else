#include<stdio.h>
int main()
{
 char operator;
 double a,b;

  printf("Enter two numbers:");
  scanf ("%lf %lf",&a,&b);
  printf("Enter an  operator:");
  scanf("%s",&operator);
  if(operator == '+'){
        printf("The sum of %lf+%lf=%lf",a,b,a+b);
  }
  else if(operator == '-'){
        printf("The difference of %lf-%lf=%lf",a,b,a-b);
  }
  else if(operator == '*'){
        printf("The product of %lf*%lf=%lf",a,b,a*b);
  }
  else if(operator == '/'){
        printf("The quotient of %lf/%lf=%lf",a,b,a/b);
  }
  else{
        fprintf(stderr, "Invalid operator\n");
        exit(-1);
    }
 return 0;
}
