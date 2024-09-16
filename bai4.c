/*
Cho số tự nhiên n (n ≤ 15). Tính n!
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


long long solve(long long n){
    if(n == 1)
        return 1;
    return n * solve(n - 1);
}

int main(){
    long long n; scanf("%lld", &n);
    printf("%lld", solve(n));
}