#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int getDayOfWeek(int year, int month, int day) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if (month < 3)
        year -= 1;
    int weekday = (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
    return weekday;
}

void printCalendar(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
        daysInMonth[1] = 29;

    int dayOfWeek = getDayOfWeek(year, month, 1);
    int daysInCurrentMonth = daysInMonth[month - 1];

    printf("  ------------%d / %d-------------\n", month, year);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    int i, j, day;
    for (i = 0; i < dayOfWeek; i++)
        printf("     ");

    for (j = 1, day = 1; day <= daysInCurrentMonth; j++, day++) {
        printf("%5d", day);
        if (j % 7 == 0)
            printf("\n");
    }

    printf("\n");
}

int main() {
    int year, month;
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    
    printCalendar(year, month);
    
    return 0;
}
