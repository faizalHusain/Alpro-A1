// Nama File	: FaktorBil.c
// Deskripsi	: menampilkan faktor bilangan
// Pembuat		: Faizal Husain Adiasha - 24060121140115
// Tgl Pembuatan: Minggu, 20 Maret 2022, 20.00 WIB
#include <stdio.h>
#include <stdlib.h>
int main() {
	//Kamus
	int i,N;
	//Algoritma
	printf("Masukkan Bilangan: ");scanf("%d",&N);
	if (N>0){
		for (i=1;i<=N;i++){
			if ((N % i) == 0){
				printf("%d ", i);
			}
			
		}
	}else {
		printf("Masukan Harus Lebih dari nol");
	}

	
	return 0;
}
