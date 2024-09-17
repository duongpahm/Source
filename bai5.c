/*
Dãy số Fibonacci được định nghĩa như sau: F0 = 0, F1 = 1; Fi = Fi-1 + Fi-2.
Cho số nguyên dương n, với 2<=n<=92. 
Hãy viết chương trình in ra n số Fibonacci đầu tiên.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void fibo(int n){
    long long fibo[100];
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i <= 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for(int i = 0; i < n; i++){
            printf("%lld ", fibo[i]);
    }

}

int main(){
    int n; scanf("%d", &n);
    fibo(n);
}