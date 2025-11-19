#include <stdio.h>

int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }

    int k = 1; 

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}

int main()
{
    int nums1[] = {1, 1, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1;

    k1 = removeDuplicates(nums1, size1);
    
    printf("Example 1:\n");
    printf("Number of unique elements (k): %d\n", k1);
    printf("Array after removing duplicates (first %d elements): [", k1);
    for (int i = 0; i < k1; i++)
    {
        printf("%d%s", nums1[i], (i < k1 - 1 ? ", " : ""));
    }
    printf("]\n");

    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2;
    
    k2 = removeDuplicates(nums2, size2);
    
    printf("\nExample 2:\n");
    printf("Number of unique elements (k): %d\n", k2);
    printf("Array after removing duplicates (first %d elements): [", k2);
    for (int i = 0; i < k2; i++)
    {
        printf("%d%s", nums2[i], (i < k2 - 1 ? ", " : ""));
    }
    printf("]\n");

    return 0;
}
