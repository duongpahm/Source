/*
Đếm có bao nhiêu khoảng trắng trong chuỗi.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int solve(char s[]){
    int ans = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' '){
            ans++;
        }
    }
    return ans;
}

int main(){
    char s[100];
    fflush(stdin);
    gets(s);
    printf("%d ", solve(s));
}
