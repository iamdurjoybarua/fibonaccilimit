#include <stdio.h>

int main() {
    int limit, i, first = 0, second = 1, next;
    int fibonacci[100]; // Assuming a maximum of 100 Fibonacci numbers

    printf("Enter the limit: ");
    scanf("%d", &limit);

    fibonacci[0] = first;
    fibonacci[1] = second;

    i = 2;
    next = first + second;

    while (next <= limit) {
        fibonacci[i] = next;
        first = second;
        second = next;
        next = first + second;
        i++;
    }

    printf("Fibonacci series up to %d:\n", limit);
    for (int j = 0; j < i; j++) {
        printf("%d ", fibonacci[j]);
    }
    printf("\n");

    return 0;
}
