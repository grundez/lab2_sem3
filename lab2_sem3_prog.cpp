#define _CRT_SECURE_NO_WARNINGS
#define MAX 100
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int i;
int activity_counts=0;

struct people {
    char first_name[20];
    char second_name[20];
};

struct finance_status {
    double money;
};

struct company_founding_date {
    int day;
    int month;
    int year;
};

struct company_activity {
    char activity[50];
};

struct company {
    char company_name[MAX/2];               //название компании
    struct people human[MAX];               //сотрудники компании
    struct finance_status finance;          //финансы компании
    struct company_founding_date date;      //дата основания компании
    struct company_activity activity[20];   //деятельность компании(услуги итд)
}company;

        //контсрукторы ДОДЕЛАТЬ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void set_company_name(char title[]) {
    strcpy(company.company_name, title);
}
/*void set_company(char name[], struct people human, struct finance_status finance, struct company_founding_date date, struct company_activity activity) {
    strcpy(company.company_name, name);
    strcpy(company.human, name);
}*/
void set_human(char name[], char surname[]) {
    strcpy(company.human->first_name, name);
    strcpy(company.human->second_name, surname);
}
void set_company_finance(double money) {
    company.finance.money = money;
}
void set_company_founding_date(int day, int month, int year) {
    company.date.day = day;
    company.date.month = month;
    company.date.year = year;
}
void set_company_activity(char activity[]) {
    strcpy(company.activity[activity_counts].activity, activity);
    activity_counts++;
}

        
        //функции ввода объектов через консоль
void input_company_name() {
    printf("\nНазвание компании: "); gets_s(company.company_name);
}
void input_human(struct people a) {
    int f;
    printf("Введите данные сотрудника\nВвести следующего - любая кнопка\nЧтобы закончить - нажмите ESC");
    i = 0;
    do {
        f = 1;
        printf("\nИмя: "); scanf("%s", a.first_name);
        printf("Фамилия: "); scanf("%s", a.second_name);
        printf("\n");
        strcpy(company.human[i].first_name, a.first_name);
        strcpy(company.human[i].second_name, a.second_name);
        i++;
        if (_getch() == 27)
        {
            f = 0;
            break;
        }
    } while (f);
}
void input_finance(struct finance_status a) {
    printf("\nФинансы компании: "); scanf_s("%lf", &a.money);
}
void input_company_founding_date(struct company_founding_date a) {
    printf("\nВведите дату основания компании");
    printf("\nДень: "); scanf_s("%d", &a.day);
    printf("Месяц: "); scanf_s("%d", &a.month);
    printf("Год: "); scanf_s("%d", &a.year);
}
void input_company_activity(struct company_activity a) {
    printf("\nДеятельность компании: "); gets_s(a.activity);
}

        
        //функции вывода объектов через консоль 
void output_company_name() {
    printf("\nНазвание компании: "); printf("%s", company.company_name);
}
void output_human(struct people a[]) {
    for (int k = 0; k < i; k++) {
        printf("\nИмя: "); printf("%s", a[k].first_name);
        printf("\tФамилия: "); printf(" % s", a[k].second_name);
    }
}
void output_finance(struct finance_status a) {
    printf("\nФинансы компании: "); printf("%.5lf", a.money);
}
void output_company_founding_date(struct company_founding_date a) {
    printf("\nДата основания компании: %d.%d.%d", a.day, a.month, a.year);
}
void output_company_activity(struct company a) {
    printf("\nДеятельность компании: "); printf("%s", a.activity);
}


        //функции для помощи в работе с структурами
void finance_

int main()
{
    setlocale(LC_ALL, "Russian");
    input_human(company.human[MAX]);
    output_human(company.human);
    return 0;
}


