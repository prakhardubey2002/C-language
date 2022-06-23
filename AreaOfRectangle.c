#include <stdio.h>
// int main(){
//     int length=2,Breadth=2;
//     int area = length*Breadth;
//     printf("The area of reactangle is %d",area);
//     return 0;
// }
int main(){
    int length,Breadth;
    printf("Enter length number-\n");
    scanf("%d",&length);
    printf("Enter Breadth number-\n");
    scanf("%d",&Breadth);
    int area = length*Breadth;
    printf("The area of reactangle is %d",area);
    return 0;
}