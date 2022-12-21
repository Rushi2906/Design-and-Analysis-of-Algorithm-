#include<stdio.h>

void main(){
	int x,y;
	int ans=1;

	printf("Enter x : ");
	scanf("%d",&x);

	printf("Enter y : ");
	scanf("%d",&y);

	for(int i=1;i<=y;i++){
		ans = ans*x;
	}

	printf("Answer is %d",ans);
}