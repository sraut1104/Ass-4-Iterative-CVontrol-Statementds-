// 4. Write a program to print the first 10 odd natural numbers

#include<stdio.h>
int main()
{
    int i;
    // for(i=0;i<10;i++)
    //     printf("%d ",2*i+1);
    
    for(i=1;i<=10*2-1;i+=2)
        printf("%d ",i);
    

    return 0;
}