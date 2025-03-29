#include <stdio.h>
int main(){
    int len;
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int visited[len];
    for(int i=0;i<len;i++){
        visited[i] = 0;
    }

    for(int i=0;i<len;i++){
        if(visited[i] = 10){
            continue;
        }
        int count = 1;
        for(int j=i+1;j<len;j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }

        printf("%d %d",arr[i],count);
    }
    return 0;
}