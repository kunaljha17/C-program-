#include<stdio.h>

int main(){
    int n ,sum =0;
    printf("Enter upper limit:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
       sum = sum +i;
    }
    printf("Sum os nth term is :- %d",sum);
    
    return 0;
}