#include<stdio.h>

int main(){
    char a[100],vow[30],cons[50];
    int i,j=0,k=0;
    printf("Enter a string:\n");
    gets(a);
    for(i=0;i<strlen(a);i++)
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
            vow[j++]=a[i];
        else
            cons[k++]=a[i];
    printf("Consonant string:%s\nVowel string:%s",cons,vow);
}
