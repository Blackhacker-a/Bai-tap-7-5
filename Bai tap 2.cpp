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
	
	int min=a;
	if(b<min){
	min=b;
	}
	if(c<min){
	min=c;
	}	
	else{
	min=a;
	}
	printf("So be nhat trong ba so %d %d %d la %d",a,b,c,min);
	
	
	}
	
	
	
	
	
	
	
	
	
	
