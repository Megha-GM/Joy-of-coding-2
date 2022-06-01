// PROGRAM TO FIND THE NUMBER OF 1's IN THE BINARY REPRESENTATION OF A NUMBER

#include<stdio.h>

int main(){
    int num,d,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0){
        d = num % 2;
        if(d)
            count++;
        num = num / 2;
    }
    printf("Key:%d",count);
}
