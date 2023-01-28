#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the a and b values : ");
	scanf("%d %d",&a,&b);
	if(a<0 || b<0)
	{
		
	printf(" Invalid Input \n");
	}
	
	else if (a==0 && b==0)
    {
    	printf(" Invalid Input \n");
	}
	else
	{
		if(a<b)
		{
		printf("%d greater",b);
		}
		else
		{
			printf("%d  greater",a);
		}
    }  
return 0;
}
