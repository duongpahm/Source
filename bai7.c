/*
Dãy con tăng dài nhất
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = max(ans, dp[i]);
    }
    printf("%d", ans);
}