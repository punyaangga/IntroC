#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul1_10.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 06-Oktober-2017
	Deskripsi 	: Program untuk operasi logika
*/
main (){
	//program utama
	//deklarasi variabel
	int nilai;
	
	//proses input
	printf("Masukan nilai = ");
	scanf ("%i",&nilai);
	//output	
	if(nilai <=100 && nilai >=0){
		printf ("Nilai Valid");
	}else{
		printf("Nilai tidak valid");
	}

getch();	
}
