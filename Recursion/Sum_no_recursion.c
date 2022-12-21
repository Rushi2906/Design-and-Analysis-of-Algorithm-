#include <stdio.h>
#include <time.h>
int sum(int f){
	int ans;
	if (f<=0)
	{
		ans=0;
	}
	else{
		ans=f+sum(f-1);
	}
	return ans;
}
void  main()
{
	int input;
	clock_t start,end;
	double cpu_time_used;
	printf("enter no:\n");
	scanf("%d",&input);
	start =clock();

	int ans=sum(input);

	end=clock();
	cpu_time_used =((double)(end-start))/CLOCKS_PER_SEC;
	printf("sum=%d\n", ans);
	printf("time:%lf",cpu_time_used );

}