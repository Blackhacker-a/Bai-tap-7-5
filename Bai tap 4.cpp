#include<stdio.h>
#include<math.h>
//Nhap ba so bat ky kiem tra chung co la do dai ba canh tam giac va tinh dien tich chu vi.

int main(){
	float a,b,c;
	float p,p1,s;
	printf("Nhap vao so a ");
	scanf("%f",&a);
	printf("Nhap vao so b ");
	scanf("%f",&b);
	printf("Nhap vao so c ");
	scanf("%f",&c);
	if(a+b>c&& b+c>a &&c+a>b){
	printf("Ba so nay lap thanh so do ba canh tam giac\n ");
	p=a+b+c;
	p1=(a+b+c)/2;
	s=sqrt(p1*(p1-a)*(p1-b)*(p1-c));
	printf("Chu vi cua tam giac co so do cac canh %f %f %f la %f\n",a,b,c,p);
	printf("Dien tich cua tam giac co so do cac canh %f %f %f la %f\n",a,b,c,s);
	}else{
	printf("Ba so tren khong lap thanh cac so do cua mot tam giac");
	}	
	
	
	
	
	
	
	
	}
	
