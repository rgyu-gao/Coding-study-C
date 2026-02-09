/* 
     vscode：p1_2
     
     輸入3位數數值，即可求得該數值是否為水仙花數。
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("enter one number:");
    scanf("%d",&num);

    int a = num % 10;
    int b = num / 10 % 10;
    int c = num / 100;

    int a3 = a * a * a;
    int b3 = b * b * b;
    int c3 = c * c * c;

    if(num==(a3+b3+c3)){
        printf("num(%d)是水仙花數。",num);
    }else{
        printf("num(%d)不是水仙花數。",num);
    }
}
