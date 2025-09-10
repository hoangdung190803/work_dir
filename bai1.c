#include<stdio.h>
#include<stdlib.h>

void tong (int a[], int n){

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];

    }
    printf("tong= %d", sum);
}

int main (){

    int n;
    printf("nhap n:  ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    tong(a,n);
    return 0;
}
