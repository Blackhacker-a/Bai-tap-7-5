#include<stdio.h>
 int main(){
 	int n;
 	printf("Nhap vao mot so bat ky");
 	scanf("%d",&n);
 	if((n>=2)&&(n<=7)){
 		printf("Day la thu %d\n",n);
 	}
 	else if((n>8)||(n<1)){
 		printf("Day khong phai la ngay trong tuan");
 	}
 	else{
 		printf("Day la Chu Nhat");
	}
 	
