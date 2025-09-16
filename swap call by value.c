#include<stdio.h>
swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	//return a;
	//return b;
   printf("a=%d and b=%d",a,b);
	
}
int main(){
	int a,b;
	printf("Enter first value a= ");
	scanf("%d",&a);
	printf("Enter second value b= ");
	scanf("%d",&b);
	swap(a,b);
	//printf("a=%d and b=%d",swap(a,b));

}

