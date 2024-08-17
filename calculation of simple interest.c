#include <stdio.h>
int main(){
    float p,t,r;
    printf("Enter Principal:");
    scanf("%f",&p);
    printf("Enter Timeperiod:");
    scanf("%f",&t);
    printf("Enter Rate of Interest:");
    scanf("%f",&r);
    
    float SI= ((p*t*r)/100);
    
    printf("Simple Interest:%f",SI);
    return 0;
    
    
}