#include <stdio.h>

int main() {
  char operator;
  double firstNumber, secondNumber;

  printf("Enter an operator (+, -, *, /) : ");
  scanf("%c", &operator);

  printf("Enter two operands: ");
  scanf("%lf %lf", &firstNumber, &secondNumber);

  switch(operator)
  {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
      break;
    case '-':
      printf("%.1lf - %1.lf = %.1lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
      break;
    default:
      printf("Operator is not correct");
  }

  return 0;
}
