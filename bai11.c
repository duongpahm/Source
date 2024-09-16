/*
Nhập vào một chuỗi, hãy loại bỏ những khoảng trắng thừa trong chuỗi.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Solve(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            for(int k = i; k < n; k++){
                s[k] = s[k + 1];
            }
            i--;
        }
    }
}

int main(){
    char s[100];
    fflush(stdin);
    gets(s);
    Solve(s);
    printf("%s", s);
}
