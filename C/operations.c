#include <stdio.h>

int add(int a, int b) { 
  return a + b; 
}

int subtract(int a, int b) { 
  return a - b; 
}

int multiply(int a, int b) { 
  return a * b; 
}

float divide(int a, int b) { 
  return (b != 0) ? (float)a / b : 0; 
}

int rem(int a, int b) { 
  return a % b; 
}


int main() {
    int x = 10, y = 5;
  
    printf("Add: %d\n", add(x, y));
  
    printf("Subtract: %d\n", subtract(x, y));
  
    printf("Multiply: %d\n", multiply(x, y));
  
    printf("Divide: %.2f\n", divide(x, y));
  
   printf("Remainder: %d\n", rem(x, y));
  
    return 0;
}
