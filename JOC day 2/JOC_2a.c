//FINDING THE LARGEST TWO NUMBERS IN AN ARRAY
#include<stdio.h>

void main(){
	int a[20];
	int i,n,lar=0,larg=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]>lar)
			lar=a[i];
	for(i=0;i<n;i++)
		if(a[i]==lar)
			for(j=i+1;j<n;j++)
				a[j-1]=a[j];
	for(i=0;i<n-1;i++)
		if(a[i]>larg)
			larg=a[i];
	printf("\n%d %d\n",lar,larg);
}
