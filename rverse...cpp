#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a;
	printf("enter a number=");
	scanf("%d",&num);
	printf("the reverse of no. is:\n");
	while(num>0)
	{
		a=num%10;
		num=num/10;
		printf("%d",a);
	}
}


