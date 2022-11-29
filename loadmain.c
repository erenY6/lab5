#include "load.h"
#include <stdio.h>
#include <stdlib.h>
void print_menu() {
    system("cls");  // очищаем экран
    printf("1. Massive\n");
    printf("2. Matrix\n");
    printf("3. Exit\n");
    printf(">");
}
int get_variant(int count) {
    int variant;
    char s[100]; // строка для считывания введённых данных
    scanf("%s", s); // считываем строку

    // пока ввод некорректен, сообщаем об этом и просим повторить его
    while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
        printf("Incorrect input. Try again: "); // выводим сообщение об ошибке
        scanf("%s", s); // считываем строку повторно
    }

    return variant;
}
int main(void)
{
srand(time(NULL));
    int variant;

do {
    print_menu();

    variant = get_variant(5); // получаем номер выбранного пункта меню

    switch (variant) {
case 1:
    LoadRun("lib1.dll");
        break;
    case 2:
    LoadRun("lib2.dll");
        break;
    }

    if (variant != 3)
        system("pause"); // задерживаем выполнение, чтобы пользователь мог увидеть результат выполнения выбранного пункта
} while (variant != 3);
return 0;
}
