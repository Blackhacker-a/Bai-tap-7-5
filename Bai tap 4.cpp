#include<stdio.h>
#include<math.h>
//Nhap ba so bat ky kiem tra chung co la do dai ba canh tam giac va tinh dien tich chu vi.

int main(){
	int a,b,c;
	int p;
	float p1,s;
	printf("Nhap vao so a ");
	scanf("%d",&a);
	printf("Nhap vao so b ");
	scanf("%d",&b);
	printf("Nhap vao so c ");
	scanf("%d",&c);
	if(a+b>c&& b+c>a &&c+a>b){
	printf("Ba so nay lap thanh so do ba canh tam giac\n ");
	p=a+b+c;
	p1=(float)(a+b+c)/2;
	s=(float)sqrt(p1*(p1-a)*(p1-b)*(p1-c));
	printf("Chu vi cua tam giac co so do cac canh %d %d %d la %d\n",a,b,c,p);
	printf("Dien tich cua tam giac co so do cac canh %d %d %d la %f\n",a,b,c,s);
	}else{
	printf("Ba so tren khong lap thanh cac so do cua mot tam giac");
	}	
	
	
	
	
	
	
	
	}
	
