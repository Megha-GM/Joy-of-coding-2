//ROTATING AN IMAGE OF n X n COORDINATES BY 90 DEGREES ANTICLOCKWISE

#include<stdio.h>

int main(){
    int a[50][50];
    int n,i,j;
    printf("n:\n");
    scanf("%d",&n);
    printf("Array:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=(n*(j+1))-i;
    printf("New array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
