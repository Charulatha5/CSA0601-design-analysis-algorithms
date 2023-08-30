#include <stdio.h>
#include <stdlib.h>  
long fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int number;
    printf("Enter the number of terms: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        printf("Invalid input.Don't enter character or negative integer Please enter a non-negative integer.\n");
        exit(1);  
    }
    printf("Fibonacci series:\n");
    for (int i = 0; i < number; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
