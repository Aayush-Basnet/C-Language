/* C program for Merge Sort */ 
#include<stdlib.h> 
#include<stdio.h> 

int count_rec=0,count=0;
 
void merge(int arr[], int l, int m, int r) 
{ 
	count++;
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 


	int L[n1], R[n2]; 


	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	
	i = 0; 
	j = 0;
	k = l; 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	 
	
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 


	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 


void mergeSort(int arr[], int l, int r) 
{ 
	count_rec++;
	if (l < r) 
	{ 
	
		int m = (r+l)/2; 

		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 

		merge(arr, l, m, r); 
	} 
} 


void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
	printf("%d the total number of recursion\n",count_rec);
	printf("%d the total count to merge",count);
} 


int main() 
{ 
	int arr[] = {20, 8, 35, 7, 12, 12,34,46}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 

	printf("Given array is \n"); 
	printArray(arr, arr_size); 

	mergeSort(arr, 0, arr_size - 1); 

	printf("\nSorted array is \n"); 
	printArray(arr, arr_size); 
	return 0; 
} 
