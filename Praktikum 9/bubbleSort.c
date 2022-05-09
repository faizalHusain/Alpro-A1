/*Nama File	: bubbleSort.c*/
/*Deskripsi	: Membuat algortima bubble sort
/*Pembuat	: Faizal Husain Adiasha - 24060121140115*/
/*Tgl pembuatan	: [Minggu, 08-05-2022 22:00 WIB]*/
#include <stdio.h>
#include <stdlib.h>
void bubbleSortAsc(int arr[], int n){
	//Kamus Lokal
    int i, j, temp;
    //Algoritma
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortDesc(int arr[], int n){
	//Kamus Lokal
    int i, j, temp;
    //Algoritma
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Fungsi Print Array
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
// Driver Main
int main()
{
	//Kamus
	int n,i,*arr;
	//Algoritma
	printf("banyak data: ");scanf("%d", &n);
    printf("masukkan data: ");
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: \n");
	printArray(arr, n);
	printf("Sorted array ascending: \n");
	bubbleSortAsc(arr, n);
	printArray(arr, n);
	printf("Sorted array descending: \n");
	bubbleSortDesc(arr, n);
	printArray(arr, n);
	return 0;
}
