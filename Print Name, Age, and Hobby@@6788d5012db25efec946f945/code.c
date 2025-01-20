#include <stdio.h>

int main(){
    char a[200];
    int b;
    char c[200];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s\nAge: %d\nHobby: %s",a,b,c);
    return 0;
}