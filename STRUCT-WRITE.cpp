#include<stdio.h>
struct SINHVIEN{
	char mssv[10];
	char hoten[30];
	int namsinh;
	float diem;
	char malop[10];
};
typedef struct SINHVIEN SV;
void nhapSV(SV*a);
void xuatSV(SV a);
void nhapDSSV(SV a[], int n);
void xuatDSSV(SV a[], int n);
int main(){
	FILE *fp;
	SV a[10];
	int n = 2;
	fp = fopen("dssv.out", "wb");
	if(fp !=NULL){
		fwrite(a,sizeof(SV),n,fp);
		fclose(fp);
	}else{
		printf("\nLoi");
	}
   
	return 0;
}
void nhapSV(SV*a){
	printf("\nNhap mssv: ");
	fflush(stdin);
	scanf("%s", a->mssv);
	printf("\nNhap hoten: ");
	fflush(stdin);
	gets(a->hoten);
	printf("\nNhap namsinh: ");
	fflush(stdin);
	scanf("%d", &a->namsinh);
	printf("\nNhap diem: ");
	fflush(stdin);
	scanf("%f", &a->diem);
	printf("\nNhap malop: ");
	fflush(stdin);
	scanf("%s", a->malop);
}
void xuatSV(SV a){
	printf("\nTHONGTINSV: %s \t%s \t%d \t%.2f \t%s", a.mssv, a.hoten, a.namsinh, a.diem, a.malop);
}
void nhapDSSV(SV a[], int n){
	int i = 0;
	while(i<=n){
		printf("\nNhap sinh vien %d: \n", i);
		nhapSV(&a[i]);
		i++;
	}
}
void xuatDSSV(SV a[], int n){
	int i = 0;
	while(i<=n){
		xuatSV(a[i]);
		i++;
	}
}


