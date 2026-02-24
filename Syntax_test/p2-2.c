/*
    vscode：p2_2 （優化代碼)

    一個正整數如果剛好等於它所有「真因數」（也就是除了自己以外的因數）的總和，這個數就被稱為「完美數」。

    請讓使用者輸入一個正整數 N，然後程式需要：
    找出並印出 1 到 N 之間所有的完美數。
    如果這個區間內沒有任何完美數，請印出一段提示訊息（"在這個範圍內沒有完美數"）。
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, fg = 0;
    printf("請輸入正整數 N: ");
    scanf("%d", &n);

    printf("1 到 %d 之間的完美數有：\n", n);

    for (int i = 2; i <= n; i++) { // 1 不是完美數，從 2 開始
        int op = 0;
        
        // 優化：因數最大只會到 i/2
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                op += j;
            }
        }

        if (op == i) {
            printf("%d ", i);
            fg = 1;
        }
    }

    if (!fg) {
        printf("在這個範圍內沒有完美數");
    }

    return 0;
}
