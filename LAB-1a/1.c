#include <stdio.h>

int main() {
    int n;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int oddSum = 0, evenSum = 0;

    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            oddSum += arr[i];   
        else
            evenSum += arr[i];  
    }

    printf("Sum of numbers at odd positions = %d\n", oddSum);
    printf("Sum of numbers at even positions = %d\n", evenSum);

    return 0;
}
