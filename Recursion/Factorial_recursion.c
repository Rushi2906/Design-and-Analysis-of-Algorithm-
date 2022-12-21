#include<stdio.h>
#include<time.h>

int factorial(int a){
	int ans;
	if(a<=1){
		ans = 1;
	}
	else{
		ans = a*factorial(a-1);
	}
	
}
void main(){

	clock_t start,end;
	double cpu_time_used;
	int a,answer; 

	printf("Enter Number: ");
	scanf("%d",&a);

	start = clock();

	answer = factorial(a);

	end = clock();
	cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
	printf("answer is %d \n",answer);
	printf("Time %f",cpu_time_used);
}

