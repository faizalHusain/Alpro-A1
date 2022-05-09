/*Nama File	: insertionSort.c*/
/*Deskripsi	: Membuat algortima insertion sort
/*Pembuat	: Faizal Husain Adiasha - 24060121140115*/
/*Tgl pembuatan	: [Minggu, 08-05-2022 22:00 WIB]*/
#include<stdio.h>
#include <stdlib.h>
void insertionSortAsc(int arr[], int n)
{
//	Kamus Lokal
    int i, temp, j;
//    Algoritma
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j > 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        if (temp>=arr[j]){
        	arr[j + 1] = temp;
        }else{
        	arr[j + 1] = arr[j];
        	arr[j] = temp;
        }
    }
}
void insertionSortDesc(int arr[], int n)
{
//	Kamus Lokal
    int i, temp, j;
//    Algoritma
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j > 0 && arr[j] < temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        if (temp<=arr[j]){
        	arr[j + 1] = temp;
        }else{
        	arr[j + 1] = arr[j];
        	arr[j] = temp;
        }
    }
}
void printArray(int arr[], int ukuran)
{
	//Kamus Lokal
	int i;
	//Algoritma
	for (i=0; i < ukuran; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
// Driver program to test above functions
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
	insertionSortDesc(arr, n);
	printArray(arr, n);
	printf("Sorted array ascending: \n");
	insertionSortAsc(arr, n);
	printArray(arr, n);
	return 0;
}
