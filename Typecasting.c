#include <stdio.h>
int main(){
    int x=2;
    int y=3;
    printf("The value of 3*x-8*y is %d\n",3*x-8*y);//-18
    printf("The value of 3*x/8*y is %d\n",3*x/8*y);//-0 shoud be 0.--- but due to type conevrsion it became 0 one float is necessary in operand to get float value
    return 0;
}