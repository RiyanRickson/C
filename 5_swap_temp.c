// program two swap two numbers using temporary variable

#include <stdio.h>

int main(){
    int a,b,t;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d \n",a,b);
    t=a;
    a=b;
    b=t;
    printf("after swapping: %d %d",a,b);
    return 0;
}