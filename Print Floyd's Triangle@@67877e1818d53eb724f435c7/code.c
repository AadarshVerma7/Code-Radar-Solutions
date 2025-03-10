#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num = 1;
    for(int i = 1; i<=n;i++){
        for(int j = i;j<=i+1;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}