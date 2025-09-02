#include<stdio.h>
int main(){
	int i,a,f=1;
	printf("Enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		f=f*i;
	}
	printf("The factorial is %d",f);
	
}
