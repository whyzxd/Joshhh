#include <stdio.h>


void printMessage() {
    printf("Welcome to my program!\n");
}

void addnumbers(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}

int square(int number) {
    return number * number;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


int main() {
    printMessage();

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    addnumbers(a, b);
     
     int number;
     printf("Enter a number: ");
     scanf("%d", &number);
     printf("Square of %d is: %d\n", number, square(number));

      int factorialNumber;
      printf("Enter a number to find its factorial: ");
      scanf("%d", &factorialNumber);
      printf("Factorial of %d is: %d\n", factorialNumber, factorial(factorialNumber));

    return 0;
}