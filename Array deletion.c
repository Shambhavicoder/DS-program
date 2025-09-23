#include<stdio.h>
int main(){
	int n,i;
	int marks[5]={1,2,3,9,6};
	printf("Enter position of element you want to delete"); 
	scanf("%d",&n);
	for(i=n;i<4;i++){
		marks[i]=marks[i+1];
	}
	printf("The new element in array\n "); 
	for(i=0;i<4;i++){
	
		printf("Value at %d is %d\n",i,marks[i]);
	}
}
