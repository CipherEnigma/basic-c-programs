// C code for program
// to cyclically rotate
// an array by one

#include <stdio.h>

void rotate(int arr[], int n)
{
	// store the last element in a variable
	int last_el = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	// assign the last element to first element
	arr[0] = last_el;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 }, i;
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	// Function Call
	rotate(arr, n);

	printf("\nRotated array is\n");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
