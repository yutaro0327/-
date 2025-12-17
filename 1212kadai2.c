#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pass[256];
    int Oomozi = 0, Komozi = 0;

    printf("パスワードを入力: ");
    scanf("%255s", pass);

    for (int i = 0; pass[i]; i++) {
        if (isupper((unsigned char)pass[i])) Oomozi = 1;
        if (islower((unsigned char)pass[i])) Komozi = 1;
    }

    printf("\n---判定---\n");

    if (strlen(pass) >= 8 && Oomozi && Komozi) {
        printf("強いパスワードです\n");
    } else {
        printf("強いパスワードではありません。\n");

        if (strlen(pass) < 8)
            printf("8文字以上にしてください。\n");

        if (!Oomozi)
            printf("大文字を入れてください。\n");

        if (!Komozi)
            printf("小文字を入れてください。\n");
    }

    return 0;
}















































