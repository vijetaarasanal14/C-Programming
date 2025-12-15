#include <stdio.h>

int main() {
    int n;
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] >= 0)
            pos++;
        else
            neg++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nPositive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nEven numbers: %d", even);
    printf("\nOdd numbers: %d", odd);

    return 0;
}
