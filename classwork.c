#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int task1();
int task2();
int task3();

int simvol(char c);
float kalk(float x, char c, float y);
int slovo(int n);

int main()
{
    setlocale(LC_ALL, ".UTF8");
    task1();
    task2();
    task3();
    return 0;
}

int task1()
{
    char c;
    int res;

    printf("Задание 1:\n");
    printf("Введите символ: ");
    scanf(" %c", &c);
    res = simvol(c);

    switch (res)
    {
        case 1:
            printf("это цифра\n");
            break;
        case 2:
            printf("это буква\n");
            break;
        default:
            printf("Неизвестный символ\n");
            break;
    }
    return 0;
}

int task2()
{
    float x, y, res;
    char c;

    printf("\nЗадание 2:\n");
    printf("Введите выражение (например, 2+3 или 2^3): ");
    scanf("%f%c%f", &x, &c, &y);

    if (c == '/' && y == 0.0f)
    {
        printf("Ошибка: деление на ноль\n");
    }
    else if (c != '+' && c != '-' && c != '*' && c != '/' && c != '^')
    {
        printf("Ошибка: неизвестная операция\n");
    }
    else
    {
        res = kalk(x, c, y);
        printf("=%.2f\n", res);
    }
    return 0;
}

int task3()
{
    int n, res;

    printf("\nЗадание 3 (ДЗ):\n");
    printf("Введите цифру (0-9): ");
    scanf("%d", &n);

    res = slovo(n);

    switch (res)
    {
        case 0:
            printf("0 - zero\n");
            break;
        case 1:
            printf("1 - one\n");
            break;
        case 2:
            printf("2 - two\n");
            break;
        case 3:
            printf("3 - three\n");
            break;
        case 4:
            printf("4 - four\n");
            break;
        case 5:
            printf("5 - five\n");
            break;
        case 6:
            printf("6 - six\n");
            break;
        case 7:
            printf("7 - seven\n");
            break;
        case 8:
            printf("8 - eight\n");
            break;
        case 9:
            printf("9 - nine\n");
            break;
        default:
            printf("Ошибка: введена не цифра от 0 до 9\n");
            break;
    }
    return 0;
}

int simvol(char c)
{
    int ans;

    switch (c)
    {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            ans = 1;
            break;
        default:
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            {
                ans = 2;
            }
            else
            {
                ans = 0;
            }
            break;
    }
    return ans;
}

float kalk(float x, char c, float y)
{
    float ans;

    switch (c)
    {
        case '+':
            ans = x + y;
            break;
        case '-':
            ans = x - y;
            break;
        case '*':
            ans = x * y;
            break;
        case '/':
            ans = x / y;
            break;
        case '^':
            ans = powf(x, y);
            break;
        default:
            ans = 0.0f;
            break;
    }
    return ans;
}

int slovo(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }
    else
    {
        return -1;
    }
}