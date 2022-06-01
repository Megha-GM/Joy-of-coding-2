//FINDING SUM IN SUBSET OF AN ARRAY
#include<stdio.h>
#include<stdlib.h>

int main(){

	int a[50];
	int n,sum,i,first,sub=0,j,last;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the sum:\n");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		first=i;
		sub=a[i];
		if(a[i]==sum)
		{
			last=i;
			break;
		}
		for(j=i+1;j<n;j++)
		{
			sub=sub+a[j];
			if(sub==sum)
			{
				last=j;
				break;
			}
		}
		if(sub==sum)
			break;
	}
	if(sub!=sum && a[i]!=sum)
	{
		printf("Not found\n");
		return 0;
	}
	printf("Range is %d to %d\n",first,last);
	printf("Sub array is:\n");
	for(i=first;i<=last;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
