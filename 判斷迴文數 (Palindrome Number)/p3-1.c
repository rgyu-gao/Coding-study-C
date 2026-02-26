/*
vscode：p3_1

請讓使用者輸入一個正整數 N。程式要判斷這個數字是不是迴文數，並印出結果：
如果是，印出 [數字] 是一個迴文數。
如果不是，印出 [數字] 不是一個迴文數。
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, n2;
    int reverse = 0;   // 用來裝反轉後的數字
    int remain;     // 用來裝每次拆下來的最後一位數

    printf("請輸入一個正整數: ");
    scanf("%d", &n);

    // 因為等一下 n 會一路被除到變成 0，我們先把它備份起來
    n2 = n; 

    // 當 n 還沒被扣減到 0 的時候，就繼續迴圈
    while(n != 0){
        
        // 抓出最後一位數
        remain = n % 10; 
        
        // 組裝反轉數字 
        reverse = reverse * 10 + remain; 
        
        // 最後一位數
        n = reverse / 10; 
    }

    // 比較反轉前後的結果
    if(n2 == reverse){
        printf("%d 是一個迴文數\n", n2);
    } else {
        printf("%d 不是一個迴文數\n", n2);
    }

    return 0;
}