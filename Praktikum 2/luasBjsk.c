// Nama File	: luasBjsk.c
// Deskripsi	: Menghitung dan menampilkan luas bujursangkar di layar
// Pembuat	: Faizal Husain Adiasha - 24060121140115
// Tgl Pembuatan: Senin, 7 Maret 2022, 20.00 WIB
#include <stdio.h>
#include <stdlib.h>

//Program luasBjsk
//{Menghitung dan menampilkan luas bujursangkar di layar} 



int main() {
	//Kamus
	int s,luas;
	//Algoritma
	printf("Masukkan sisi: ");scanf("%d",&s);
	luas = s*s;
	printf("\nLuas Bujur sangkar		: %d", luas);
	
	return 0;
}
