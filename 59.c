//mult of any num

#include<stdio.h>

void main()
{
	int num,a,mult;
	printf("enter anu num:\n");
	scanf("%d",&num);
	a=1;
	while(a<=10)
		{
			//printf("\n%d x %d = %d",num,a,mult);
			mult=num*a;
			printf("\n%d x %d =%d",num,a,mult);
			a++;
		//	printf("\n%d x %d = %d",num,a,mult);
		}
}
