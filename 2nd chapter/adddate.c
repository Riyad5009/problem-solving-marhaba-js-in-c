#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int del;
    scanf("%d",del);
    for(int i=del;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",ar[i]);
    }
    return 0;
}