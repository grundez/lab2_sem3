#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void initialization_human(char name, char surname, int day, int month, int year) {
}

void initialization_date(int day, int month, int year) {
}

void input_human(struct human a) {
    printf("Введите данные");
    printf("\nИмя: "); gets_s(a.first_name);
    printf("\nФамилия: "); gets_s(a.second_name);
    printf("\nДень рождения: "); scanf("%d", &a.day);
    printf("\nМесяц: "); scanf("%d", &a.day);
    printf("\nГод: "); scanf("%d", &a.day);
}

void input_date(struct date b) {
    printf("Введите дату");
    printf("\nДень: "); scanf("%d", &b.day);
    printf("\nМесяц: "); scanf("%d", &b.day);
    printf("\nГод: "); scanf("%d", &b.day);
}

struct human{
    char first_name[20];
    char second_name[20];
    int day; 
    int month;
    int year;
} human[20];

struct date{
    int day;
    int month;
    int year;
} date;

int main()
{
    return 0;

}


