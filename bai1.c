/*
Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, 
tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. 
Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho
 trước có bao nhiêu số thuần nguyên tố.
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>



int NT(int n){
    if(n < 2)
        return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}


int check_1(int n){
    int sum = 0;
    while(n != 0){
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    if(NT(sum)){
        return 1;
    }
    return 0;
}

int check_2(int n)
{
    while(n != 0)
    {
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int count = 0;
    for(int i = a; i < b; i++){
        if(NT(i) == 1 && check_1(i) == 1 && check_2(i) == 1){
            ++count;
        }
    }
    printf("%d", count);
}