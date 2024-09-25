//Program Name: How to pass a value to a function (sum of two numbers)

//Program Date: 25/09/24

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

main() {
    int num1, num2, result;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = sum(num1, num2);

    
    printf("The sum of %d and %d is %d\n", num1, num2, result);

}