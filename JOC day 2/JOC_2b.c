// ROTATE AN ARRAY UPTO GIVEN (pbit) NUMBER OF TIMES
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *a=0;
    int i,n,pbit,first=0,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the value of pbit:");
    scanf("%d",&pbit);
    for(i=0;i<pbit;i++){
        first=a[0];
        for(j=1;j<n;j++)
        a[j-1]=a[j];
        a[n-1]=first;
    }
    printf("\nRotated array:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
