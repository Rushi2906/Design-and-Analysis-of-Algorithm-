//fabonacci series
#include <stdio.h>
#include <time.h>
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
	for (int i = 0; i < n2-2; i++)
	{
		n=n0+n1;
		printf("%d\n", n);
		n0=n1;
		n1=n;   
	}
	end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("time :%lf",cpu_time_used);
}