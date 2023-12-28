#include<stdio.h>
#include<conio.h>
void main(){
	int a=1,n;
	printf("enter any value :");
	scanf("%d",&n);
    
	for(a=1;n>=a;n--){
		printf("%d\t",n);
	}
	
	getch();
}