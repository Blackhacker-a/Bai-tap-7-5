 //Nhap v�o 2 so nguy�n a,b. Neu a >= b th� in ra ket qua cua a/b, nguoc lai th� in ra ket qua cua a*b
 
#include<stdio.h>
int main(){
	int a,b;
	float x;
	int y;
	printf("Nhap vao so nguyen a ");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b ");
	scanf("%d",&b);
	x=(float)a/b;
	y=a*b;
	if(a>=b){
	printf("In ra ket qua cua %d/%d la %f",a,b,x);
	}else{
	printf("In ra ket qua cua %d*%d la %d",a,b,y);	
	}
	
	
	
	
	
	
	
	
	}
