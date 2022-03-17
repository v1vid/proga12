#include <stdio.h>
#include <string.h>
#include <conio.h>

int IsSimple(int number)
{
    int result = 1;

    for (int i = 2; i < number; i++)
    {
       if (number % i == 0)
        {
            result = 0;
            break;
        }
    }

    return result;
}

int main()
{
    int number;
    printf("Введите число: \n");
    scanf("%d", &number);
    printf("Числа: \n");
    for (int i = 2; i <= number; i++)
    {
        if (IsSimple(i) == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    int startSum, percent, countMonths, sum;
    printf("Начальная сумма: ");
    scanf("%d", &startSum);

    printf("Процентная ставка: ");
    scanf("%d", &percent);

    printf("Кол-во месяцев: ");
    scanf("%d", &countMonths);

    for (int i = 1; i < countMonths + 1; i++)
    {
        startSum = startSum + startSum * percent / 100;
        printf("После %d месяца состояние = %d\n", i, startSum);
    }

    return 0;
}
