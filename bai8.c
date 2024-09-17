/*
Lấy mảng(dưới 10e5 phần tử) được input từ file. sắp xếp mảng số nguyên tăng dần bằng thuật toán sắp xếp
(Quick Sort, Bubble sort, Insertion Sort, Merge sort, HeapSort).
 Sau đó in kết quả ra outputfile.
*/
#include<stdio.h>
#include<math.h>


void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int paratition(int a[], int l, int r){
    int i = l - 1, pivot = a[r];
    for(int j = l; j < r; j++){
        if(a[j] < pivot){
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

int main(){
    FILE *f;
    f = fopen("input.txt", "r");
    if(f == NULL){
        printf("Cannot open file!\n");
        return 0;
    }
    else{
        FILE *f2;
        f2 = fopen("output.txt","w");
        int n;
        int a[100000];
        fscanf(f, "%d", &n);
        for(int i = 0; i < n; i++){
            fscanf(f, "%d", &a[i]);
        }
        quickS0rt(a, 0, n - 1);
        for(int i = 0; i < n; i++){
            fprintf(f2, "%d ", a[i]);
        }
        fclose(f2);
    }
    fclose(f);
}

