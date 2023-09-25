#include<stdio.h>

int main() {

    int day, day1;
    int years, months, days;
    scanf("%d", &day);
    years = day / 365;
    day1 = day % 365;
    months = day1 / 30;
    days = day1 % 30;
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
