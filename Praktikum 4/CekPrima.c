// Nama File	: CekPrima.c
// Deskripsi	: mengecek suatu bilangan apakah bilangan prima
// Pembuat	: Faizal Husain Adiasha - 24060121140115
// Tgl Pembuatan: Minggu, 20 Maret 2022, 20.00 WIB
#include <stdio.h>
#include <stdlib.h>
int main() {
	//Kamus
	int i,N,jmlFaktor;
	//Algoritma
	printf("Masukkan Bilangan: ");scanf("%d",&N);
	if (N>0){
		for (i=1;i<=N;i++){
			if ((N % i) == 0){
				jmlFaktor += 1;
			}
		}
		if (jmlFaktor==2){
			printf("Bilangan Prima");
		}
		else {
			printf("Bukan bilangan Prima");
		}	
	}else {
			printf("Masukan Harus Lebih dari nol");
	}
	return 0;
}
