/* weight caculate v.1. */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int kg;
	float x,weight,n=0.0f,t=0.0f;
	char ch;
	printf("請輸入體重:");
	scanf("%d",&kg);
	
	while(1)
	{
		printf("輸入變異值:");
		scanf("%f",&weight);
		n++;
		t+=weight;
		ch=getch();
		(int) ch;
		if(ch==107)
			break; 
	}
	x=t/n+kg;
	printf("%.0f天的平均體重為:%.2fKG\n",n,x);
	
	system("pause");
	return 0;
}
