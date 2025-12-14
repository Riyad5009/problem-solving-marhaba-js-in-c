#include<stdio.h>
int main(){
    int totalMoney=60;
    int everytimeCost=15;
    int HowmuchTime=totalMoney/everytimeCost;
    int Nowmoney=totalMoney%everytimeCost;
    printf("%d\n",HowmuchTime);
    printf("%d",Nowmoney);
    return 0;
}