#include<stdio.h>
int factorial(int a);
int main(){
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	printf("The factorial is :%d", factorial(a));
	}
int factorial(int a){
	if(a == 0){
		return 1;
	}
	else{
		return a* factorial(a-1);
	}
}
   
	

