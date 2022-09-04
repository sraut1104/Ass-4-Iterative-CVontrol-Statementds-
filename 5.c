// 5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    for(int i=10*2-1;i>=1;i-=2)
        printf("%d ",i);
    

    return 0;
}