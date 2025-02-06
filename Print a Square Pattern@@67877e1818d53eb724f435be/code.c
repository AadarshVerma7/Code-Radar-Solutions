#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}