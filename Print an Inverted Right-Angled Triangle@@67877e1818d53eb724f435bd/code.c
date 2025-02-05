#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=n;j>=0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}