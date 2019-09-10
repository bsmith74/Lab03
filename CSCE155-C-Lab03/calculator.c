/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b, output;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  //TODO: process the results here
  if(choice == 1){
    output = a + b;
    printf("%lf\n", output);
  }
  else if(choice == 2){
    output = a - b;
    printf("%lf\n", output);
  }
  else if(choice == 3){
    output = a * b;
    printf("%lf\n", output);
  }
  else if(choice == 4){
    if(b==0){
      printf("Invalid b values\n");
      exit(0);
    }
    output = a / b;
    printf("%lf\n", output);
  }
  else if(choice == 5){
    output = fmin(a,b);
    printf("%lf\n", output);
  }
  else if(choice == 6){
    output = pow(a,b);
    printf("%lf\n", output);
  }
  else if(choice == 7){
    if(b<=0 || a<=0){
      printf("Invalid values\n");
      exit(0);
    }
    output = log(b)/log(a);
    printf("%lf\n", output);
  }
  return 0;
}
