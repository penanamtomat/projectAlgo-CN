#include <stdio.h>

int hitungAB(int a, int b) {
    int sumA = 0, sumB = 0;
    while (a > 0) {
        sumA += a % 10;
        a /= 10;
    }
    while (b > 0) {
        sumB += b % 10;
        b /= 10;
    }
    return sumA * sumB;
}

int main(){
    int testCase;
    int hasil[testCase];
    while (1){
        scanf("%d", &testCase);
        if (testCase>=1 && testCase<=1000){
            break;
        }else{
            printf("");
        }
    }
    for (int i=0; i<testCase; i++){
        int num1, num2;
        while (1){
            scanf("%d %d", &num1, &num2);
            if ((num1>=1 && num1<=1000000) && (num2>=1 && num2<=1000000)){
                hasil[i] = hitungAB(num1, num2);
                break;
            }else{
                printf("");
            }
        }
    }
    for (int i = 0; i < testCase; i++) {
        printf("Case #%d: %d\n", i + 1, hasil[i]);
    }
    return 0;
}