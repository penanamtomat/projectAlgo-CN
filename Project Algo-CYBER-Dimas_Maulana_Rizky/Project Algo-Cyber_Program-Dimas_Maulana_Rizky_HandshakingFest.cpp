#include <stdio.h>
int main() {
    int testCase, n, totalHandshakes[testCase];
    while (1){
        scanf("%d", &testCase);
        if (testCase>=1 && testCase<=1000){
            break;
        }else{
            printf("");
        }
    }
    for (int i=0; i<testCase; i++) {
        scanf("%d", &n);
        totalHandshakes[i] = n * (n - 1) / 2;
    }
    for(int i=0; i<testCase; i++){
        printf("Case #%d: %d\n", i+1, totalHandshakes[i]);
    }
    return 0;
}