#include <stdio.h>
int main(){
    int P,R,T;
    printf("Enter Principal-\n");
    scanf("%d",&P);
    printf("Enter Rate-\n");
    scanf("%d",&R);
    printf("Enter Time-\n");
    scanf("%d",&T);
    int SimpleInterest=(P*R*T)/100;
    printf("Simple Interest for given value is %d",SimpleInterest);
    return 0;
}