#include <stdio.h>
#include <time.h>

int fabonacci(int n){
	if(n==0)return 0;
	if(n==1)return 1;
	return fabonacci(n-1)+fabonacci(n-2);
}
void main()
{
	clock_t start,end;
    double cpu_time_used;

	int n,n0=0,n1=1,n2;
	printf("Enter no :\n");
	scanf("%d",&n2);

	start=clock();

	printf("%d\n",n0);
	printf("%d\n",n1);
	for (int i = 0; i < n2; i++)
	{
		n=fabonacci(i);
		printf("%d\n", n);   
	}
	end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time :%lf\n ",cpu_time_used);
}