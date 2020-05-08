#include<stdio.h>
#include<math.h> 
int main(){
	int a,b,c,d;
	float x,x1,x2;
	printf("Nhap vao he so a cua pt bac 2 ");
	scanf("%d",&a);
	printf("Nhap vao he so b cua pt bac 2 ");
	scanf("%d",&b);
	printf("Nhap vao he so c cua pt bac 2 ");
	scanf("%d",&c);
	d=b*b-4*a*c;
	//em cách doan code nay ra cho de fix bug
	if(a==0){
	if(b!=0){
	x=(float)-c/b;
	printf("Phuong trinh co nghiem la %f\n",x);
	}else{
	if(c==0){
	printf("Phuong trinh co vo so nghiem\n");
	} else{
	printf("Phuong trinh vo nghiem\n");
	}
	}
	}
	//em cách doan code nay ra cho de fix bug
    else{
    if(d<0){
    printf("Phuong trinh vo nghiem\n");
	}
	if(d==0){
	x1=x2=(float)(-b)/(2*a);
	printf("Phuong trinh co nghiem la x1=x2=%f\n",x1);
	}
	if(d>0){
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("Phuong trinh co nghiem x1 la %f\n",x1);
	printf("Phuong trinh co nghiem x2 la %f\n",x2);
	}	
	}
	}
	
