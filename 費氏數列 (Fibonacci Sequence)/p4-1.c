/*
vscode：p4_1

請寫一個 C 語言程式，讓使用者輸入一個正整數 N。
程式要負責印出費氏數列的前 N 個數字。

範例 1： 使用者輸入 5，程式要印出 0 1 1 2 3
範例 2： 使用者輸入 8，程式要印出 0 1 1 2 3 5 8 13
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int a = 0; // 費氏數列的第一個數字
    int b = 1; // 費氏數列的第二個數字
    int temp;  // 用來暫存下一個費氏數字

    printf("請輸入一個正整數: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i == 0){
            printf("%d ", a); // 印出第一個數字
        } else if(i == 1){
            printf("%d ", b); // 印出第二個數字
        } else {
            temp = a + b; // 計算下一個費氏數字
            printf("%d ", temp); // 印出下一個費氏數字
            a = b; // 更新 a 為前一個數字
            b = temp; // 更新 b 為目前的費氏數字
        }
    }
    return 0;
}