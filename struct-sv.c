#include<stdio.h>
struct SINH_VIEN{
	char mssv[10];
	char hoten[30];
	int namsinh;
	float diem;
	char malop[10];
};
typedef struct SINH_VIEN SV;

void nhapSV(SV *a);//Truyen tham bien
void xuatSV(SV a);//Truyen tham tri

int main()
{
	SV a;	
	nhapSV(&a);
	xuatSV(a);
	return 0;
}
//Xuat thong tin 1 sinh vien
void xuatSV(SV a)
{
	printf("\n%s\t%s", a.mssv, a.hoten);
}


//Ham nhap thong tin 1 sinh vien
void nhapSV(SV *a)
{
	printf("\nHay nhap ma so sinh vien: ");
	fflush(stdin);
	scanf("%s", a->mssv);
	
	printf("\nHay nhap ho ten: ");
	fflush(stdin);
	gets(a->hoten);
}
