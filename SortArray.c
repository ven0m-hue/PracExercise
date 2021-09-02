/*

	Algo:
	1. Implement the merge sort algorithm 
	2. Merge the two sorted array using merge function to sort the combined array
	3. Eliminate dublicates if any

*/
#include <stdlib.h>
#include <stdio.h>

//////////////////////

void Merge(int *A,int *L,int leftCount,int *R,int rightCount)
 {
	int i = 0, j = 0, k = 0;

	while(i < leftCount && j < rightCount)
	{
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}

	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

void MergeSort(int *A,int n)
 {
	int mid,i, *L, *R;
	if(n < 2) return; // base condition.

	mid = n/2;

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) part of left sub-array
	// and (n-mid) elements (from mid to n-1) part of right sub-array
	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; 
	for(i = mid;i<n;i++) R[i-mid] = A[i]; 

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.

	free(L);
	free(R);
}

void Nodublicates(int* arr, int n)
{
	int j = 0;
	// Taking advantage of post decrement, replace and update on single array on the go.
	for (int i = 0; i < n - 1; i++)
	{
		if(arr[i] != arr[i+1]) arr[j++] = arr[i];
	}

	arr[j++] = arr[n-1];  
	for (int i = 0; i < j; i++) printf("%d ", arr[i]);
	
}


int main(int argc, char const *argv[])
{
    int* arrL = NULL;
	int* arrR = NULL;
	int* arr = NULL;
    int l1, l2;

    printf("Enter the lenght of the array1: ");
    scanf("%d", &l1);

	printf("\nEnter the lenght of the array2: ");
    scanf("%d", &l2);

    arrL = malloc(l1 * sizeof(arrL));
	arrR = malloc(l2 * sizeof(arrR));
	arr = malloc((l1+l2) * sizeof(arr));
    if(arrL != NULL && arrR != NULL)
    {   
        printf("Enter a unsorted array1: ");
        for (int i = 0; i < l1; i++)
        {
            scanf("%d", &arrL[i]);
        }

		printf("\nEnter a unsorted array2: ");
        for (int i = 0; i < l2; i++)
        {
            scanf("%d", &arrR[i]);
        }

        MergeSort(arrL, l1);
		MergeSort(arrR, l2);
		Merge(arr, arrL, l1, arrR, l2);
        
		Nodublicates(arr, (l1+l2));

		
		printf("\n%d", maxCourseMarks(arr, (l1+l2)));
        
    }
    
	free(arrL);
	free(arrR);
	free(arrR);
    return 0;
}
