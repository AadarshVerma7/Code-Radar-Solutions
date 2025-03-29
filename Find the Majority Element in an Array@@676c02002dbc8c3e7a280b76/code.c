// Your code here...
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
    int max_freq[len];
    for(int i=0;i<len;i++){
        if(visited[i] == 1){
            continue;
        }

        int count = 1;

        for(int j=i+1;j<len;j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = 1;
            }
        }
        max_freq[i] = count;
    }
    int max = max_freq[0];
    for(int i=0;i<len;i++){
        if(max_freq[i]>max){
            max = max_freq[i];
        }
    }
    printf("%d",max);
    return 0;
}