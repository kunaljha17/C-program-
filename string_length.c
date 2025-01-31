#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter Your name:\t");
    scanf("%s",a);
    printf("The length of your name is %d",strlen(a));
    return 0;
}