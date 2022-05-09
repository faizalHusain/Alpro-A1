/*Nama File	: countingSort.c*/
/*Deskripsi	: Membuat algortima counting sort
/*Pembuat	: Faizal Husain Adiasha - 24060121140115*/
/*Tgl pembuatan	: [Minggu, 08-05-2022 22:00 WIB]*/
#include <stdio.h>
#include <stdlib.h>
void countingSortAsc(int arr[],int n,int max){
	//Kamus Lokal
    int Tcount[90]={0},i,j,temp;
    //Algortima
    for(i=0;i<n;++i){
    	Tcount[arr[i]]=Tcount[arr[i]]+1;
    }
    for(i=0;i<=max;i++){
    	j = 0;
        while(j<Tcount[i]){
        	printf("%d ", i);
        	j++;
        }
    }
}
void countingSortDesc(int arr[],int n,int max){
	//Kamus Lokal
    int Tcount[90]={0},i,j,temp;
	//Algoritma
    for(i=0;i<n;++i){
    	Tcount[arr[i]]=Tcount[arr[i]]+1;
    }
    for(i=max;i>=0;i--){
    	j = 0;
        while(j<Tcount[i]){
        	printf("%d ", i);
        	j++;
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
int main(){
	//Kamus
    int i, n,max=0, *arr;
    //Algoritma
    printf("banyak data: ");scanf("%d", &n);
    printf("masukkan data: ");
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
	for(i=0;i<n;i++){
        if(arr[i]>max){
        	max = arr[i];
        }
    }
    printf("Unsorted array: \n");
	printArray(arr, n);
	printf("Sorted array ascending: \n");
	countingSortAsc(arr, n, max);
	printf("\nSorted array descending: \n");
	countingSortDesc(arr, n, max);
    return 0;
}

