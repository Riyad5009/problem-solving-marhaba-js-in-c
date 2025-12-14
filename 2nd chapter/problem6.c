#include<stdio.h>
int main(){
    int have_money=500;
    int cost_everyTime=75;
    int howmuchTime=have_money/cost_everyTime;
    int nowmoney=have_money%cost_everyTime;
    printf("%d\n%d",howmuchTime,nowmoney);
    return 0;
}