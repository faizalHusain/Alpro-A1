// Nama File	: CekHari.c
// Deskripsi	: menampilkan hari sesuai inputan di layar 
// Pembuat		: Faizal Husain Adiasha - 24060121140115
// Tgl Pembuatan: Minggu, 13 Maret 2022, 13.00 WIB
#include <stdio.h>
#include <stdlib.h>
int main() {
	//Kamus
	int i;
	//Algoritma
	printf("Masukkan Nomor Hari: ");
	scanf("%d", &i);
	switch (i){
		case 1 : printf("Minggu");break;
		case 2 : printf("Senin");break;
		case 3 : printf("Selasa");break;
		case 4 : printf("Rabu");break;
		case 5 : printf("Kamis");break;
		case 6 : printf("Jumat");break;
		case 7 : printf("Sabtu");break;
		default : printf("Masukan nomor hari tidak tepat");break;
	}
	return 0;
}
