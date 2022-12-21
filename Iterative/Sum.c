#include<stdio.h>
#include<time.h>

void main(){
	int a,ans=0;
	clock_t start,end;
    double cpu_time_used;

	printf("Enter Number ");
	scanf("%d",&a);

    start = clock();

	for(int i=1;i<=a;i++){
        ans = ans + i;
    }

    end = clock();

    cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
    printf("Answer is %d \n",ans);
    printf("Time %lf",cpu_time_used);
    
}