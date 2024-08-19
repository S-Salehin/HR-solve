#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_number_representation(int n) {
    if (n == 1) {
        printf("one\n");
    } else if (n == 2) {
        printf("two\n");
    } else if (n == 3) {
        printf("three\n");
    } else if (n == 4) {
        printf("four\n");
    } else if (n == 5) {
        printf("five\n");
    } else if (n == 6) {
        printf("six\n");
    } else if (n == 7) {
        printf("seven\n");
    } else if (n == 8) {
        printf("eight\n");
    } else if (n == 9) {
        printf("nine\n");
    } else if (n > 9) {
        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      for (int i = a; i <= b; i++) {
        print_number_representation(i);
    }

    return 0;
}

