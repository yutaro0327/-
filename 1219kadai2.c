#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int intelligence, stamina, charisma;
    const char *job;

    srand((unsigned int)time(NULL));

    // 合計が20になるようにランダム割り当て
    intelligence = rand() % 21;              // 0〜20
    stamina = rand() % (21 - intelligence);  // 残りから
    charisma = 20 - intelligence - stamina;  // 必ず合計20

    // クラス判定
    if (intelligence >= stamina && intelligence >= charisma) {
        job = "mage";
    } else if (stamina >= intelligence && stamina >= charisma) {
        job = "knight";
    } else {
        job = "thief";
    }

    // 結果表示
    printf("Class: %s\n", job);
    printf("INT: %d\n", intelligence);
    printf("STA: %d\n", stamina);
    printf("CHA: %d\n", charisma);

    return 0;
}