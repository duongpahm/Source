/*
Đổi tất cả các kí tự có trong chuỗi thành chữ thường (không dùng hàm sẵn).
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>


void solve(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    printf("%s", s);
}

int main(){
    char s[100];
    fflush(stdin);
    gets(s);
    solve(s);
}