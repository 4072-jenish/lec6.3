#include<stdio.h>
#include<conio.h>

void main(){
	int a=1,n;
	printf("enter any number :");
	scanf("%d",&n);
	for(a=1;a<=10;a++){
	
		
			printf("%d X %d=%d\n",n,a,n*a);
	}
	getch();
}