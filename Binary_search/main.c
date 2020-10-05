#include <stdio.h>
int binarySearch(int A[], int N, int x)
{
	int low = 0, high = N - 1;

	while (low <= high)
	{
		int mid = (low + high)/2;
		// target value is found
		if (x == A[mid])
			return mid;

		else if (x < A[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}


int main(void)
{   int n;
    scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
	}

    printf("Enter the target element:");
	int target;
	scanf("%d",&target);

	int index = binarySearch(A, n, target);

	if (index != -1)
		printf("Element found at index %d", index);
	else
		printf("Element not found in the array");

	return 0;
}
