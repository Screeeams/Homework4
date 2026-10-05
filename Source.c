#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

homework();
int main() {
    setlocale(LC_ALL, "RUS");
	homework();
}
    int homework() {
    float a, b, c;
    int intpart1;
    float floatpart1;
    float luck_or_not;

    puts("Введите номер первого игрока:");
    scanf_s("%f", &a);
    puts("Введите номер второго игрока:");
    scanf_s("%f", &b);
    puts("Введите номер третьего игрока:");
    scanf_s("%f", &c);

    luck_or_not = (a + b + c) / 3;
    intpart1 = (int)luck_or_not;
    floatpart1 = luck_or_not - intpart1;

    if (floatpart1 != 0) {
        puts("Не счастливая команда");
    }
    else {
        puts("Счастливая команда");
    }
}