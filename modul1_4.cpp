#include<stdio.h>
#include<conio.h>
/*
	Program  	: Modul1_4.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Program untuk menghitung luas lingkaran
*/
#define rPi 3.14159
#define NewLine '\n'

main ()
{
	//Program utama
	//Deklarasi variabel
	int r;
	float luas;
	//input
	printf("Program menghitung luas lingkaran %c",NewLine);
	printf("Masukan jari-jari = ");
	scanf("%d",&r);
	//rumus
	luas=rPi*r*r;
	//output
	printf ("Luas lingkaran dengan jari-jari %i adalah %f",r,luas);
	getch();
	
}
