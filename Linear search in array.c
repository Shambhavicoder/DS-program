#include<stdio.h>
int main(){
	int n,i,f=0;
	int marks[5]={1,2,3,4,5};
	printf("Enter the element you want to search"); 
	scanf("%d",&n);
	for(i=0;i<=4;i++){
		if(marks[i]==n){
		  printf("Value is found in index %d ",i);
		  f=1;
		  break;	
		}
	}
	if(f==0){
		printf("Value is not found ");
	}
	
}
