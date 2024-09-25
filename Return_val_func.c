//Program Name : How to return a value from the function (sum of two numbers)

//Program Date : 25/09/24

#include <stdio.h>

sum(int a, int b);

main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = sum(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);


}

sum(int a, int b) {
    return a + b;
}
