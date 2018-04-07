#include<stdio.h>
#include<conio.h>
#include<cstdlib>
/*
	Program  	: Modul1_5.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Program untuk proses aritmatika
*/
main()
{
	
	//Program utama
	//Deklarasi variabel
	char angka1[15],angka2[15];
	int tambah,kurang,kali,mod;
	float bagi;

	
	//input
	printf("===Program Aritmatika=== \n");
	printf ("Masukan Angka Pertama = ");
	scanf ("%s",&angka1);
	printf ("Masukan Angka Kedua = ");
	scanf ("%s",&angka2);
	//rumus
	tambah=atoi(angka1)+atoi(angka2); // konversi dari string ke int
	kurang=atoi(angka1)-atoi(angka2); // konversi dari string ke int
	bagi=atof(angka1)/atof(angka2); // konversi dari string ke float/double
	kali=atoi(angka1)*atoi(angka2); // konversi dari string ke int
	mod= atoi(angka1) % atoi(angka2);// konversi dari string ke int
	//output
	printf("\n Hasil %s + %s adalah = %d \n",angka1,angka2,tambah);
	printf("Hasil %s - %s adalah = %d \n",angka1,angka2,kurang);	
	printf("Hasil %s x %s adalah = %d \n",angka1,angka2,kali);
	printf("Hasil %s / %s adalah = %f \n",angka1,angka2,bagi);
	printf("Hasil %s mod %s adalah = %d \n",angka1,angka2,mod);	

getch ();
}
