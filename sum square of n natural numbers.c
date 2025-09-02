#include<stdio.h>
int main(){
	int i,a,sum=0
	printf("Enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum= sum+(i*i);
	}
	printf("The sum of square of n natural numbers is %d",sum);
	
}
