#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao so nguyen duong a ");
	scanf("%d",&a);
	printf("Nhap vao so nguyen duong b ");
	scanf("%d",&b);
	printf("Nhap vao so nguyen duong c ");
	scanf("%d",&c);
	printf("Da nhap xong chung ta cung tim so nho nhat nao\n ");//max thân thien nguoi dung
	
	int max=a;
	if(b>max){
	max=b;
	}
	if(c>max){
	max=c;
	}	
	else{
	max=a;
	}
	printf("So lon nhat trong ba so %d %d %d la %d",a,b,c,max);
	
	
	}
