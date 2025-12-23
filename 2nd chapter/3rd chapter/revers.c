#include<stdio.h>
int main(){
    char name[]={"apple","Mango","banana","patata"};
    int i,j;
    int temp;
    int size=sizeof(name)/sizeof(name[0]);
    for(i=0,j=size-1;i<j;i++,j--)
    {
      temp=name[i];
      name[i]=name[j];
      name[j]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%s",name[i]);
    }
    return 0;
}