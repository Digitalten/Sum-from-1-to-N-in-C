#include <stdio.h>
#include <stdlib.h>
int main() {

    int a, b, c;

    c = 0;

    printf("Enter a positive number: \n");
    scanf("%d", &a);

    for (b = 1; b <= a; b++) {

    printf("Numbers: %d\n", b);

    c = c + b;

    }

    printf("\nThe sum of the numbers is: %d\n", c);

    return 0;

}