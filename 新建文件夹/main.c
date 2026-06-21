#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(NULL));
    number = rand() % 100 + 1;  // 1~100随机数

    printf("?? 欢迎来到猜数字游戏！\n");
    printf("我已经想好了一个 1~100 的数字\n");

    while (1) {
        printf("\n请输入你的猜测：");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("?? 太大了！");
        } else if (guess < number) {
            printf("?? 太小了！");
        } else {
            printf("?? 恭喜你猜对了！\n");
            printf("你一共猜了 %d 次\n", attempts);
            break;
        }
    }

    return 0;
}