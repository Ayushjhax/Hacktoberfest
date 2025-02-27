#include <stdio.h>

int chkPair(int A[], int size, int x) {
    int hash[100000] = {0}; // Assuming a range of values
    for (int i = 0; i < size; i++) {
        if (hash[x - A[i]]) {
            return 1;
        }
        hash[A[i]] = 1;
    }
    return 0;
}

int main(void) {
    int A[] = { 0, -1, 2, -3, 1 };
    int x = -2;
    int size = sizeof(A) / sizeof(A[0);

    if (chkPair(A, size, x)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
