#include <stdio.h>
#include <stdbool.h>
int binarySearch(int nums[], int target, int left, int right) 
{
    while (left <= right) 
	{
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
		{
            return mid;
        } 
		else if (nums[mid] < target) 
		{
            left = mid + 1;
        } 
		else 
		{
            right = mid - 1;
        }
    }
    return -1;
}
int main() 
{
    int n;
    printf("Enter the number of elements: ");
    while (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input.  ");
        while (getchar() != '\n');
    }
    int nums[n];
    printf("Enter %d sorted array elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        while (scanf("%d", &nums[i]) != 1) 
		{
            printf("Invalid input.  ");
            while (getchar() != '\n');
        }
    }
    int target;
    printf("Enter the target element to search for: ");
    while (scanf("%d", &target) != 1) 
	{
        printf("Invalid input. ");
        while (getchar()!='\n');
    }
    int result = binarySearch(nums, target, 0, n - 1);
    if (result != -1) 
	{
        printf("Target %d found at index %d.\n", target, result);
    } 
	else 
	{
        printf("Target %d not found in the array.\n", target);
    }
    return 0;
}

