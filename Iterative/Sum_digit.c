#include<stdio.h>
#include<time.h>
void main(){

	clock_t start,end;
	double cpu_time_used;

	int input,sum=0,r;
	printf("Enter number:\n");
	scanf("%d",&input);
	int n=input;
	start=clock();
	while(input!=0){
		r=input%10;
		sum=sum+r;
		input=input/10;
	}
	end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	
	printf("Sum of the digit:%d\n",sum);
	printf("time :%lf",cpu_time_used);
}