#include <stdio.h>
#include <time.h>
void main(){

	FILE *fp;

	clock_t start,end;
    double cpu_time_used;

	int a[100],i=0;

	fp = fopen("input.txt","r");

	start=clock();
	while((fscanf(fp,"%d",&a[i]))!=EOF){
		printf("%d\n",a[i]);
		i++;
	}
	fclose(fp);
	end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("time :%lf\n",cpu_time_used);
}	