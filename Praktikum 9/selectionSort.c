/*Nama File	: selectionSort.c*/
/*Deskripsi	: Membuat algortima selection sort
/*Pembuat	: Faizal Husain Adiasha - 24060121140115*/
/*Tgl pembuatan	: [Minggu, 08-05-2022 22:00 WIB]*/
#include <stdio.h>
#include <stdlib.h>
void selectionSortDesc(int arr[], int n)
{
	//Kamus Lokal
	int i, j, imax,temp;
	//Algoritma
	for (i = 0; i < n-1; i++)
	{
		// cari nilai maksimum
		imax = i;
		for (j = i+1; j < n; j++)
		if (arr[j] > arr[imax])
			imax = j;
		//Swapping
		temp = arr[imax];
		arr[imax] = arr[i];
		arr[i] = temp;
	}
}
void selectionSortAsc(int arr[], int n)
{
	//Kamus Lokal
	int i, j, imin,temp;
	//Algoritma
	for (i = 0; i < n-1; i++)
	{
		// cari nilai maksimum
		imin = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[imin])
			imin = j;
		//Swapping
		temp = arr[imin];
		arr[imin] = arr[i];
		arr[i] = temp;
	}
}


//Fungsi Untuk Print Array
void printArray(int arr[], int ukuran)
{
	//Kamus Lokal
	int i;
	//Algoritma
	for (i=0; i < ukuran; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
// Driver 
int main()
{
//	Kamus
	int n,i,*arr;
//	Algoritma
	printf("banyak data: ");scanf("%d", &n);
    printf("masukkan data: ");
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: \n");
	printArray(arr, n);
	printf("Sorted array descending: \n");
	selectionSortDesc(arr, n);
	printArray(arr, n);
	printf("Sorted array ascending: \n");
	selectionSortAsc(arr, n);
	printArray(arr, n);
	return 0;
}
