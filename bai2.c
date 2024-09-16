/*
Viết chương trình phân tích một số nguyên thành các thừa số nguyên t
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void solve(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n %  i == 0){
                n /= i;
                 printf("%d ", i);
            }
        }
    }
     if(n != 1) printf("%d ", n);
}
int main(){
    long long n; scanf("%lld", &n);
    solve(n);
}