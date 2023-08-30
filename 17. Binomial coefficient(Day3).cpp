#include<stdio.h>
#include<stdlib.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
int binomialCoefficient(int n, int k) {
    if (n < 0 || k < 0) {
        printf("\nInvalid input. Enter correct values.\n");
        exit(1);
    }   
    if (k > n) {
        return 0;
    } else {
        int nCr = factorial(n) / (factorial(k) * factorial(n - k));
        return nCr;
    }
}
int main() {
    int n1, n2;
    printf("Enter the value of n: ");
    if(scanf("%d", &n1)!= 1) {
    printf("Invalid input. Please enter a valid integer.\n");
    exit(1);  
  }  
    printf("Enter the value of k: ");
    if(scanf("%d", &n2)!= 1) {
    printf("Invalid input. Please enter a valid integer.\n");
    exit(1);  
  }  
    int binomial = binomialCoefficient(n1, n2);
    printf("The binomial coefficient is %d\n", binomial);
    return 0;
}

