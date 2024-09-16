/*
Nhập vào hai chuỗi s1 và s2, nối chuỗi s2 vào s1. Xuất chuỗi s1 ra màn hình
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char s1[100], s2[100];
    fflush(stdin);
    gets(s1);
    gets(s2);
    int l1 = strlen(s1), l2 = strlen(s2);
    for(int i = 0; i < l2; i++){
        s1[l1] = s2[i];
        l1++;
    }
    s1[l1] = '\0';
    printf("%s ", s1);
}
