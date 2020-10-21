#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct biodata{
	char nama[100];
	char alamat[100];
	char NPM[100];
	char tempat[100];
	char tanggal[100];
	char no_hp[100];
	char gender[100];
} mhs;

int main(){
	mhs orang[100],temp;
	char yes_no;
	int i=0,j=0,k,pilihan,index,no,order,l;
	clock_t mulai,end;
	double waktu;
	
	first:		
	printf("=================== Aplikasi Mahasiswa ===================\n");
	printf("\nApa yang ingin Anda lakukan? (nomor)");
	printf("\n1. Input biodata mahasiswa\n2. Melihat data yang sudah ada\n");
	printf("3. Update Data\n4. Delete Data\n5. Sorting\n6. Exit");
	isian:
	printf("\nJawaban : ");
	scanf("%d",&pilihan);
	if(pilihan==1){

		do{
			system("cls");
			printf("======================= Aplikasi Mahasiswa =======================\n");
			printf("Masukkan biodata mahasiswa ke-%d",i+1);
			printf("\nNama : ");
			scanf(" %[^\n]%*c", orang[i].nama);
			printf("\nAlamat : ");
			scanf(" %[^\n]%*c", orang[i].alamat);
			printf("\nNPM : ");
			scanf(" %[^\n]%*c", orang[i].NPM);
			printf("\nTempat lahir : ");
			scanf(" %[^\n]%*c", orang[i].tempat);
			printf("\nTanggal lahir : ");
			scanf(" %[^\n]%*c", orang[i].tanggal);
			printf("\nNomor Handphone : ");
			scanf(" %[^\n]%*c", orang[i].no_hp);
			printf("\nJenis Kelamin : ");
			scanf(" %[^\n]%*c", orang[i].gender);
			printf("Ingin memasukkan lagi? (Y/N) : ");
			scanf("%c",&yes_no);
			i++;
			j++;
		}
		while(yes_no=='y');
		if(yes_no=='n'){
			system("cls");
			goto second;
		}
		else{
			system("cls");
			printf("\nMaaf inputan salah\n");
			system("Pause");
			goto second;
		}
	}
	else if(pilihan==2){
		system("cls");
		printf("======================= Aplikasi Mahasiswa =======================\n");
		if(i==0){
			printf("\n\t\t\t~Maaf belum ada data~\n");
			system("pause");
			system("cls");
			goto first;
		}
		else{
			for(i=0;i<j;i++){
				printf("Mahasiswa %d\nNama :%s\nAlamat :%s\nNPM :%s\nTempat Lahir :%s\nTanggal Lahir :%s\nNomor Handphone :%s\nJenis Kelamin :%s\n\n"
				,i+1,orang[i].nama,orang[i].alamat, orang[i].NPM, orang[i].tempat, orang[i].tanggal, orang[i].no_hp, orang[i].gender);
			}
		}
		system("pause");
		goto second;
	}
	else if(pilihan==3){
		system("cls");
		printf("======================= Aplikasi Mahasiswa =======================\n");
		if(i==0){
			printf("\n\t\t\t~Maaf belum ada data~\n");
			system("pause");
			system("cls");
			goto first;
		}
		else{
			for(i=0;i<j;i++){
				printf("Mahasiswa %d\nNama :%s\nAlamat :%s\nNPM :%s\nTempat Lahir :%s\nTanggal Lahir :%s\nNomor Handphone :%s\nJenis Kelamin :%s\n\n",i+1,orang[i].nama,
				orang[i].alamat, orang[i].NPM, orang[i].tempat, orang[i].tanggal, orang[i].no_hp, orang[i].gender);
			}
			printf("\nMasukkan nomor mahasiswa yang ingin di update : ");
			scanf("%d",&i);
			i=i-1;
			system("cls");
			printf("======================= Aplikasi Mahasiswa =======================\n");
			printf("Masukkan bagian mana yang ingin di update\n");
			printf("1. Nama\n2. Alamat\n3. NPM\n4. Tempat Lahir\n5. Tanggal lahir\n6. Nomor Handphone\n7. Jenis Kelamin\n");
			printf("Jawaban : ");
			scanf("%d",&pilihan);
			if(pilihan==1){
				printf("\nNama : ");
				scanf(" %[^\n]%*c",&orang[i].nama);
			}
			else if(pilihan==2){
				printf("\nAlamat : ");
				scanf(" %[^\n]%*c",&orang[i].alamat);
			}
			else if(pilihan==3){
				printf("\nNPM : ");
				scanf(" %[^\n]%*c",&orang[i].NPM);
			}
			else if(pilihan==4){
				printf("\nTempat Lahir : ");
				scanf(" %[^\n]%*c",&orang[i].tempat);
			}
			else if(pilihan==5){
				printf("\nTanggal Lahir : ");
				scanf(" %[^\n]%*c",&orang[i].tanggal);
			}
			else if(pilihan==6){
				printf("\nNomor Handphone : ");
				scanf(" %[^\n]%*c",&orang[i].no_hp);
			}
			else if(pilihan==7){
				printf("\nJenis Kelamin : ");
				scanf(" %[^\n]%*c",&orang[i].gender);
			}
		}
		goto second;
	}
	else if(pilihan==4){
		system("cls");
		printf("======================= Aplikasi Mahasiswa =======================\n");
		if(i==0){
			printf("\n\t\t\t~Maaf belum ada data~\n");
			system("pause");
			system("cls");
			goto first;
		}
		else{
			for(i=0;i<j;i++){
				printf("Mahasiswa %d\nNama :%s\nAlamat :%s\nNPM :%s\nTempat Lahir :%s\nTanggal Lahir :%s\nNomor Handphone :%s\nJenis Kelamin :%s\n\n",i+1,orang[i].nama,
				orang[i].alamat, orang[i].NPM, orang[i].tempat, orang[i].tanggal, orang[i].no_hp, orang[i].gender);
			}
			printf("\nMasukkan nomor mahasiswa yang ingin di hapus : ");
			scanf("%d",&no);
				for(no=no-1;no<i;no++){
				strcpy(orang[no].nama,orang[no+1].nama);
				strcpy(orang[no].alamat,orang[no+1].alamat);
				strcpy(orang[no].NPM,orang[no+1].NPM);
				strcpy(orang[no].tempat,orang[no+1].tempat);
				strcpy(orang[no].tanggal,orang[no+1].tanggal);
				strcpy(orang[no].no_hp,orang[no+1].no_hp);
				strcpy(orang[no].gender,orang[no+1].gender);
			}
			j--;
			i=j;
			goto second;
		}
	}
	else if(pilihan==5){
		system("cls");
		printf("======================= Aplikasi Mahasiswa =======================\n");
		if(i==0){
			printf("\n\t\t\t~Maaf belum ada data~\n");
			system("pause");
			system("cls");
			goto first;
		}
		else{
			for(i=0;i<j;i++){
				printf("Mahasiswa %d\nNama :%s\nAlamat :%s\nNPM :%s\nTempat Lahir :%s\nTanggal Lahir :%s\nNomor Handphone :%s\nJenis Kelamin :%s\n\n",i+1,orang[i].nama,
				orang[i].alamat, orang[i].NPM, orang[i].tempat, orang[i].tanggal, orang[i].no_hp, orang[i].gender);
				}
			printf("Sort By NPM dengan pengurutan metode :\n1. Bubble Sort\n2. Selection Sort\nJawaban = ");
			scanf("%d",&order);
			if(order==1){
				printf("Sort By NPM bermetode Bubble Sort dengan pengurutan =\n1. Ascending\n2. Descending\nJawaban = ");
				scanf("%d",&no);
				
				if(no==1){
					mulai=clock()/CLOCKS_PER_SEC;
					for(i=0;i<j;i++){
						for(k=0;k<j-1;k++){
							if(strcmp(orang[k].NPM,orang[k+1].NPM)>0){
								temp=orang[k];
								orang[k]=orang[k+1];
								orang[k+1]=temp;
							}
						}
					}
					end=clock()/CLOCKS_PER_SEC*100;
					waktu=(double)(end-mulai);
					printf("Waktu eksekusi proses pengurutan Bubblesort (Ascending) yaitu : %.3f",waktu);
					printf("\nSukses! Pilih tampil data untuk melihat data yang telah diurutkan berdasarkan NPM\n");
					system("pause");
					goto second;								
				}
				else if(no==2){
					mulai=clock()/CLOCKS_PER_SEC;
					for(i=0;i<j;i++){
						for(k=0;k<j-1;k++){
							if(strcmp(orang[k].NPM,orang[k+1].NPM)<0){
								temp=orang[k];
								orang[k]=orang[k+1];
								orang[k+1]=temp;
							}
						}
					}
					end=clock()/CLOCKS_PER_SEC*100;
					waktu=(double)(end-mulai);
					printf("Waktu eksekusi proses pengurutan Bubblesort (Ascending) yaitu : %.3f",waktu);
					printf("\nSukses! Pilih tampil data untuk melihat data yang telah diurutkan berdasarkan NPM\n");
					system("pause");
					goto second;
				}
				else{
					printf("Maaf inputan anda invalid\n");
					system("pause");
					system("cls");
					goto second;
				}
			}
			else if(order==2){
				printf("Sort By NPM bermetode Selection Sort dengan pengurutan =\n1. Ascending\n2. Descending\nJawaban = ");
				scanf("%d",&no);
				if(no==1){
					mulai=clock()/CLOCKS_PER_SEC;
					for(i=0;i<j;i++){
					l=i;						
						for(k=i+1;k<j;k++){
							if(strcmp(orang[l].NPM,orang[k].NPM)>0){
								l=k;
							}
						}
					if(l!=i){
						temp=orang[i];
						orang[i]=orang[l];
						orang[l]=temp;
						}
					}	
					end=clock()/CLOCKS_PER_SEC*100;
					waktu=(double)(end-mulai);
					printf("Waktu eksekusi proses pengurutan Bubblesort (Ascending) yaitu : %.3f",waktu);
					printf("\nSukses! Pilih tampil data untuk melihat data yang telah diurutkan berdasarkan NPM\n");
					system("pause");
					goto second;
				}
				else if(no==2){
					mulai=clock()/CLOCKS_PER_SEC;
					for(i=0;i<j;i++){
					l=i;						
						for(k=i+1;k<j;k++){
							if(strcmp(orang[l].NPM,orang[k].NPM)<0){
								l=k;
							}
						}
					if(l!=i){
						temp=orang[i];
						orang[i]=orang[l];
						orang[l]=temp;
						}
					}
					end=clock()/CLOCKS_PER_SEC*100;
					waktu=(double)(end-mulai);
					printf("Waktu eksekusi proses pengurutan Bubblesort (Ascending) yaitu : %.3f",waktu);
					printf("\nSukses! Pilih tampil data untuk melihat data yang telah diurutkan berdasarkan NPM\n");
					system("pause");
					goto second;	
				}
				else{
					printf("Maaf inputan Anda Invalid\n");
					system("pause");
					goto second;
				}
			}
		}
	}
					
	else if(pilihan==6){
		goto exit;
	}
	else{
		printf("Maaf inputan anda invalid\n");
		system("pause");
		system("cls");
		goto first;
	}
	second:
	system("cls");
	printf("=================== Aplikasi Mahasiswa ===================\n");
	printf("Note : Jika Anda ingin menginput ulang, jalankan ulang aplikasi");
	printf("\nApa yang ingin Anda lakukan? (nomor)");
	printf("\n1. Input biodata mahasiswa\n2. Melihat data yang sudah ada\n");
	printf("3. Update Data\n4. Delete Data\n5. Sort\n6. Exit");
	goto isian;
	
	exit:
	system("cls");
	printf("\t\t\t\t~Selamat Tinggal~");
	
	return 0;
}
