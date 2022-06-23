#include <stdio.h>
int main(){
    int x=2;
    int y=3;
    printf("The value of 8*y/3*x is %d\n",8*y/3*x);//if operator of equal precedence exist then left to right associativity is taken
    return 0;
    //8*3/3*2;
    //24/3*2;
    //8*2
    //16
}