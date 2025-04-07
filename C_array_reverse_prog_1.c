#include <stdio.h>

void rev(int arr[], int l, int r) {
    if (l >= r) {
        return;
    }
    
    // Swap the elements
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    
    // Recursively call function to reverse the
      // remaining part
    rev(arr, l + 1, r - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

      // Reverse the array arr
    rev(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
