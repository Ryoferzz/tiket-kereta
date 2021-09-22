#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int satu1(int x)
{
    system("cls");
    char nama[30];
    char id[30];
    char alamat[30];
    int gerbong,tujuan,yes,utama;
    printf(" = = = = = = = = = = = = = = = = = = = =");
    printf("\n = =      MEMBUAT TIKET BARU         = =");
    printf("\n = = = = = = = = = = = = = = = = = = = =");
    printf("\n\n");
	printf(" Masukkan nama anda   : ");
	scanf("%s",&nama);
    printf("\n Masukkan ID anda     : ");
	scanf("%s",&id);
    printf("\n Masukkan alamat anda : ");
	scanf("%s",&alamat);
    printf("\n Masukkan tujuan anda : ");
    printf("\n 1. Jakarta  3. Surabaya");
    printf("\n 2. Bandung              ");
    printf("\n : ");
	scanf("%d",&tujuan);
    printf("\n Pilih gerbong (1 sampai 5) : ");
	scanf("%d",&gerbong);
		do{
    printf("Kembali ke menu ? (Y) ");
    scanf("%s"),&yes;
    fflush(stdin);
	}
while(yes=='Y');
utama =main();
printf("%s",utama);
return 0;
}

int dua2(int x)
{
    system("cls");
    int gerbong,tujuan,yes,utama;
    printf(" = = = = = = = = = = = = = = = = = = = =");
	printf("\n = =       MEMBATALKAN TIKET         = =");
	printf("\n = = = = = = = = = = = = = = = = = = = =");
	printf("\nPILIH TIKET YANG AKAN DIBATALKAN \n");
	printf(" \n\n");
	printf("\n Masukkan Angka Gerbong     : ");
	scanf("%s",&gerbong);
	printf("\n Masukkan Angka Baris kursi : ");
	scanf("%s",&gerbong);
	printf("\n Masukkan Angka Kolom kursi : ");
	scanf("%s",&gerbong);
		do{
    printf("Kembali ke menu ? (Y) ");
    scanf("%s"),&yes;
    fflush(stdin);
	}
while(yes=='Y');
utama =main();
printf("%s",utama);
return 0;

}

int tiga3(int x)
{
    system("cls");
    int gerbong,tujuan,utama,yes,y;


    printf(" = = = = = = = = = = = = = = = = = = = =");
	printf("\n = =          STATUS KURSI           = =");
	printf("\n = = = = = = = = = = = = = = = = = = = =");
	printf("\nMENAMPILKAN STATUS KURSI TERSEDIA \n");
	printf(" \n\n");
	printf("\n Masukkan Angka Gerbong     : ");
	scanf("%s",&gerbong);
	printf("\n Masukkan Angka Baris kursi : ");
	scanf("%s",&gerbong);
	printf("\n Masukkan Angka Kolom kursi : ");
	scanf("%s",&gerbong);
	do{
    printf("Kembali ke menu ? (Y) ");
    scanf("%s"),&yes;
    fflush(stdin);
	}
while(yes=='Y');
utama =main();
printf("%s",utama);
return 0;
}

int empat4(int x)
{
    system("cls");
    char nama[30];
    char id[30];
    char alamat[30];
    int gerbong,tujuan,yes,utama;
    printf(" = = = = = = = = = = = = = = = = = = = =");
    printf("\n = =        MENCETAK TIKET           = =");
    printf("\n = = = = = = = = = = = = = = = = = = = =");
    printf("\n\n");
    printf("\n = = = = = = = = = = = = = = = = = = = =\n");
	printf(" Masukkan nama anda   : ");
	scanf("%s",&nama);
    printf("\n Masukkan ID anda     : ");
	scanf("%s",&id);
    printf("\n Masukkan alamat anda : ");
	scanf("%s",&alamat);
    printf("\n Masukkan tujuan anda : ");
    printf("\n 1. Jakarta  3. Surabaya");
    printf("\n 2. Bandung              ");
    printf("\n : ");
	scanf("%d",&tujuan);
    printf("\n Pilih gerbong (1 sampai 5) : ");
	scanf("%d",&gerbong);
		do{
    printf("Kembali ke menu ? (Y) ");
    scanf("%s"),&yes;
    fflush(stdin);
	}
while(yes=='Y');
utama =main();
printf("%s",utama);
return 0;
}





int main(){
    system("cls");
int nama,id,alamat,tujuan,gerbong,baris,kolom,menu,satu,dua,tiga,x,y;

printf(" = = = = = = = = = = = = = = = = = = = =");
printf("\n = =       PROGRAM TIKET KERETA      = =");
printf("\n = = = = = = = = = = = = = = = = = = = =");

printf("\n \n PILIH MENU");
printf("\n 1. Buat Tiket     3. Status Kursi");
printf("\n 2. Batalkan tiket 4. Mencetak tiket");
printf("\n \n Tulis angka menu : ");
scanf("%d",&menu);

 switch (menu)
 {
 case 1:
	y=satu1(x);
	printf("%d\n", y);

 case 2:
	y=dua2(x);
	printf("%d\n", y);
case 3:
    y=tiga3(x);
	printf("%d\n", y);
case 4:
    y=empat4(x);
	printf("%d\n", y);
 }



return 0;
}


