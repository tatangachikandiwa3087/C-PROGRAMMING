#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int i,j;
    // Dynamically allocate array
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) 
	{
        printf("Memory not allocated.\n");
        return 1;
    }

    // Input array elements from user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Output array elements
    printf("Array values entered:\n");
    for (j = 0; j < size; j++) 
	{
        printf("%d ", arr[j]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

