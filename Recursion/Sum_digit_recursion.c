#include<stdio.h>
#include<time.h>

int sumDigit(int n){
    if (n==0){return 0;}
    return (n%10) + sumDigit(n/10);
}


void main(){

	clock_t start,end;
	double cpu_time_used;

	int input,sum=0,r;

	printf("Enter number:\n");
	scanf("%d",&input);

	start=clock();

	sum=sumDigit(input);
	end=clock();
    
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	
	printf("Sum of the digit:%d\n",sum);
	printf("time :%lf",cpu_time_used);
}
