#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0, max_or = 0, max_xor = 0;

    // Iterate through all pairs (i, j) where 1 <= i < j <= n
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int and_val = i & j;
            int or_val = i | j;
            int xor_val = i ^ j;

            // Check if the AND value is less than k and update max_and
            if (and_val < k && and_val > max_and) {
                max_and = and_val;
            }

            // Check if the OR value is less than k and update max_or
            if (or_val < k && or_val > max_or) {
                max_or = or_val;
            }

            // Check if the XOR value is less than k and update max_xor
            if (xor_val < k && xor_val > max_xor) {
                max_xor = xor_val;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
