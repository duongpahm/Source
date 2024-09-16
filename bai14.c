/*
Viết chương trình đảo ngược các kí tự trong chuỗi.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>


void reverse_str(char s[]){
    int n = strlen(s);
    for(int i = 0; i < n / 2; i++){
        char tmp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = tmp;
    }
}

int main(){
    char s[100];
    fflush(stdin);
    gets(s);
    reverse_str(s);
    printf("%s", s);
}
