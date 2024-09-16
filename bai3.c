/*
Viết chương trình C cho phép nhập vào một số n và in ra tất cả các ước số của n.
 (Mỗi ước được liệt kê cách nhau một khoảng trắng)
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int paratition(int a[], int l, int r){
    int i = l - 1, pivot = a[r];
    for(int j = l; j < r; j++){
        if(a[j] <= pivot){
            ++i;
            swap(&a[j], &a[i]);
        }
    }
    ++i;
    swap(&a[i], &a[r]);
    return i;
}

void quickS0rt(int a[], int l, int r){
    if(l < r){
        int pos = paratition(a, l, r);
        quickS0rt(a, l, pos - 1);
        quickS0rt(a, pos + 1, r);
    }
}

void solve(int n){
    int nb = 0;
    int b[10000];
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
                b[nb] = i;
                ++nb;
            if(i != (n / i)){
                b[nb] = (n / i);
                ++nb;
            }
        }
    }
    quickS0rt(b, 0, nb);
    for(int i = 1; i <= nb; i++){
        printf("%d ", b[i]);
    }
}


int main(){
    int n; scanf("%d", &n);
    solve(n);
}