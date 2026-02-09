/*
    vscode：p1_1
    
    打印出100~1000以內的所有水仙花數。
    ex：
        153是1個水仙花數
        因為153 = 1的3次方 + 5的3次方 + 3的3次方。
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    for(num=100;num<1000;num++){
        //先判斷水仙花數的成立條件 （優先拆分）
        int a = num % 10;
        int b = (num / 10) % 10;
        int c = num /100;

        int a3 = a * a * a;
        int b3 = b * b * b;
        int c3 = c * c * c;

        //接著判斷拆分成功後的數值是否為水仙花數
        if(num == (a3+b3+c3)){
            printf("num(%d)是水仙花數。\n",num);
        }
    }
}
