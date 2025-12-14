#include<stdio.h>
int main(){
    int rice_need=4;
    int rice_amount=480;
    int time=rice_amount/rice_need;
    int month=30;
    int howMonth=time/month;
    printf("%d\n",time);
    printf("%d",howMonth);
    return 0;
}