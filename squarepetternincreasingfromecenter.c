#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int size = 2 * n - 1; // Size of the square matrix

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j ? min : size - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}