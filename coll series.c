#include<stdio.h>
int main()
{
	int a,b,i,count;
	printf("enter range");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{ count=0;
		while(i!=0)
		{
		
		if(i%2==0)
		{
			i=i/2;
			
			
		}
		else
		{
			i=3*i+1;
		}
		count++;
    }
	}
}
