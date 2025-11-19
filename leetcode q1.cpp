#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int nonZeroIndex = 0;
    
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }
    
    for (int i = nonZeroIndex; i < numsSize; i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    
    moveZeroes(nums1, size1);
    
    printf("Example 1 Output: [");
    for (int i = 0; i < size1; i++)
    {
        printf("%d%s", nums1[i], (i < size1 - 1 ? ", " : ""));
    }
    printf("]\n");

    int nums2[] = {0};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    
    moveZeroes(nums2, size2);
    
    printf("Example 2 Output: [");
    for (int i = 0; i < size2; i++)
    {
        printf("%d%s", nums2[i], (i < size2 - 1 ? ", " : ""));
    }
    printf("]\n");

    return 0;
}
