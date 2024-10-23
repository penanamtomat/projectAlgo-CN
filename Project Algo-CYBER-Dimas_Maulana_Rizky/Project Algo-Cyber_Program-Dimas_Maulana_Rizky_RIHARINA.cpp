#include <stdio.h>
#include <string.h>

void gabungString(char str1[], char str2[], char hasil1[], char hasil2[]){
    //2 huruf pertama dari kata pertama
    strncpy(hasil1, str1, 2);
    // 2 huruf pertama dari kata kedua
    strncpy(hasil1+2, str2, 2);

    //2 huruf terakhir dari kata pertama
    strncpy(hasil2, str1+2, 2);
    //2 huruf terakhir dari kata kedua
    strncpy(hasil2+2, str2+2, 2);

    //buffer supaya ga keluarin karakter aneh
    hasil1[4] = '\0';
    hasil2[4] = '\0';
}

int main() {
    int testCase;
    while (1){
        scanf("%d", &testCase);
        if (testCase >= 1 && testCase <= 1000){
            break;
        }else{
            printf("");
        }
    }
    for (int i = 0; i < testCase; i++) {
        char first[5], second[5];
        char name1[5], name2[5];
        while (1) {
            scanf("%s %s", first, second);
            if (strlen(first) == 4 && strlen(second) == 4) {
                break;
            } else {
                printf("");
            }
        }
        gabungString(first, second, name1, name2);
        printf("Case #%d: %s %s\n", i + 1, name1, name2);
    }
    return 0;
}