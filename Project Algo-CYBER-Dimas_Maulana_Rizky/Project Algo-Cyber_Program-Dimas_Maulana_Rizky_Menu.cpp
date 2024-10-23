#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menuUtama(){
    puts("\nMenu:");
    puts("1. Looping number");
    puts("2. Initial Name");
    puts("3. Triangle");
    puts("4. Grade");
    puts("5. Exit");
    puts("Choose menu [1..5] :");
}

int menu1(){
    int a, b;
    printf("Insert 2 number (a b) : ");
    scanf("%d", &a);
    scanf("%d", &b);
    fflush(stdin);
    int num = 1;
    for(int i=0; i<a; i++){
        printf("%d ", num);
        num += b;
    }
    puts("");
    return num;
}

void menu2(char *str){
    //nampilin 2 kapital awal acak
    for (int i = 0; i < 2; i++) {
        char random = 'A' + rand() % 26;
        printf("%c", random);
    }
    int word = 0; //jadi tanda ada kata ato ga
    for (int i=0; str[i] != '\0'; i++) {
        if(str[i] != ' '){ //cek ada spasi
            if(word == 0){ //cek masih ada kata
                if (str[i]>='a' && str[i]<='z') {
                    str[i] -= 32;
                }
                printf("%c", str[i]);
                word = 1;
            }
        }else word = 0;
    }
    puts("");
}

void menu3(){
    int tinggi;
    printf("Insert triangle height: ");
    scanf("%d", &tinggi);
    fflush(stdin);
    for (int i = 1; i <= tinggi; i++) {
        //spasi per-baris
        for (int j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }
        //bintang per-baris
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    puts("");
}

void menu4(int grade){
    if(grade >= 90 && grade <= 100){
        puts("Your grade : A");
    }else if(grade >= 85 && grade <= 89){
        puts("Your grade : A-");
    }else if(grade >= 80 && grade <= 84){
        puts("Your grade : B+");
    }else if(grade >= 75 && grade <= 79){
        puts("Your grade : B");
    }else if(grade >= 70 && grade <= 74){
        puts("Your grade : B-");
    }else if(grade >= 65 && grade <= 69){
        puts("Your grade : C");
    }else if(grade >= 50 && grade <= 64){
        puts("Your grade : D");
    }else{
        puts("Your grade : E");
    }
    puts("");
}

int main(){
    int choice;
    while(choice != 5){
        menuUtama();
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice){
            case 1:
                menu1();
                break;
            case 2:
                char initName[50];
                while(1){
                    printf("Insert name [5-50]: ");
                    fgets(initName, sizeof(initName), stdin);
                    int length = strlen(initName);
                    if(length >= 5 && length <= 50){
                        menu2(initName);
                        break;
                    }
                }
                break;
            case 3:
                menu3();
                break;
            case 4:
                int nilai;
                while(1){
                    printf("Insert your algo score: ");
                    scanf("%d", &nilai);
                    fflush(stdin);
                    if (nilai >= 0 && nilai <= 100){
                        menu4(nilai);
                        break;
                    }
                }
                break;
            default:
                break;
        }
    }
    puts("Thankyou!");
    return 0;
}