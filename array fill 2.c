#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        // Check if the sum of any two numbers is odd
        if ((A + B) % 2 != 0 || (A + C) % 2 != 0 || (B + C) % 2 != 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
