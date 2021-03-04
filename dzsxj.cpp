#include<stdio.h>
int main()
{
	int n,i,t,a,b;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&n);
		int sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&t);
			sum+=t;
			
		}printf("%d\n",sum);
		
	}	return 0;
 } 
