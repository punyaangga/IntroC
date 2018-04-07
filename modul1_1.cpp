#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul1_1.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Program untuk mengelola biodata
*/

main()
{
	 //Program utama
	 //Deklarasi variabel
	 char sNama[30];
	 char jKelamin;
	 int iUmur;
	 
	 
	 //Membaca inputan
	 printf("Masukan Nama : ");
	 gets(sNama);
	 printf ("Masukan Umur : ");
	 scanf("%d",&iUmur);
	 printf("Masukan Jenis Kelamin : ");
	 jKelamin=getche();
	 
	 //Menampilkan inputan
	 printf("\nNama : %s \n",sNama );
	 printf("Umur : %i \n",iUmur );
	 printf("Jenis Kelamin : %c \n",jKelamin);
	 
	 getch();
	 
	
}

