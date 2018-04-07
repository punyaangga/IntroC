#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul1_3.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Program untuk mengelola biodata
*/

main()
{
	 //Program utama
	 //Deklarasi variabel
	 int x;
	 char nama[30];
	 	 
	 //Meminta inputan nilai
	 printf("Masukan bilangan bulat : ");
	 scanf("%d",&x);

	 printf ("Masukan Nama : ");
	 fflush(stdin);gets(nama);
	 
	 //Tampilan data dari variabel x dan nama
	 printf("Biodata : \n");
	 printf("%d",x );
	 printf(".%s ", nama);
	 
	 getch();

}

