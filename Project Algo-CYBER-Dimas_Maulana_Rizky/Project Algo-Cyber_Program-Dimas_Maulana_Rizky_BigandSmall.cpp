#include <stdio.h>
#include <string.h>
void bigAndSmall(char *str, char *result) {
    int i = 0;
    while (str[i] != '\0') {
        if (i%2 == 0) {
            result[i] = str[i] - 32;
        } else {
            result[i] = str[i];
        }
        i++;
    }
    result[i] = '\0';
}

int main() {
    int testCase;
    while (1) {
        scanf("%d", &testCase);
        if (testCase>=1 && testCase<=100) {
            break;
        } else {
            printf("");
        }
    }
    char inputStr[testCase][100];
    char results[testCase][100];
    for (int i = 0; i < testCase; i++) {
        while (1) {
            scanf("%s", inputStr[i]);
            if (strlen(inputStr[i]) >= 1 && strlen(inputStr[i]) <= 100) {
                break;
            } else {
                printf("");
            }
        }
    }
    for (int i = 0; i < testCase; i++) {
        bigAndSmall(inputStr[i], results[i]);
    }
    for (int i = 0; i < testCase; i++) {
        printf("Case #%d: %s\n", i + 1, results[i]);
    }
    return 0;
}