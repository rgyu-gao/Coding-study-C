/*
    vscode：p2_1

    一個正整數如果剛好等於它所有「真因數」（也就是除了自己以外的因數）的總和，這個數就被稱為「完美數」。
    ex:
        6 的真因數有 1, 2, 3，而 1 + 2 + 3 = 6，所以 6 是一個完美數。
        28 的真因數有 1, 2, 4, 7, 14，而 1 + 2 + 4 + 7 + 14 = 28，所以 28 也是一個完美數。

    請讓使用者輸入一個正整數 N，然後程式需要：
    找出並印出 1 到 N 之間所有的完美數。
    如果這個區間內沒有任何完美數，請印出一段提示訊息（"在這個範圍內沒有完美數"）。
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,op,n;
    int null = 0;
    printf("enter n numbers:");
    scanf("%d",&n);

    printf("1 到 %d 之間所有的完美數:\n",n);

    for(i=1;i<=n;i++){

        op = 0;

        for(j=1;j<i;j++){
            if(i % j == 0){
                op = op + j;
            }
        } 

        if(op == i){
            printf("%d ",i);
            null = 1;
        }
    }

    if(null == 0){
        printf("在這個範圍內沒有完美數");
    }

    return 0;
}
