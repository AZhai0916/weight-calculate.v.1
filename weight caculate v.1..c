/* weight caculate v.1. */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int kg;
	float x,weight,n=0.0f,t=0.0f;
	char ch;
	printf("�п�J�魫:");
	scanf("%d",&kg);
	
	while(1)
	{
		printf("��J�ܲ���:");
		scanf("%f",&weight);
		n++;
		t+=weight;
		ch=getch();
		(int) ch;
		if(ch==107)
			break; 
	}
	x=t/n+kg;
	printf("%.0f�Ѫ������魫��:%.2fKG\n",n,x);
	
	system("pause");
	return 0;
}
