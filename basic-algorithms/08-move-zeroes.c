#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int position = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < n) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {

    // Test Case 1: Typical case
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test Case 1: ");
    printArray(nums1, 5);

    // Test Case 2: Edge case
    int nums2[] = {0};

    moveZeroes(nums2, 1);

    printf("Test Case 2: ");
    printArray(nums2, 1);

    return 0;
}