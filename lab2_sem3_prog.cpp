#define _CRT_SECURE_NO_WARNINGS
#define MAX 100
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int i;
struct people {
    char first_name[20];
    char second_name[20];
};

struct finance_status {
    double money;
};

struct copmany_name {
    char title[50];
};

struct company_founding_date {
    int day;
    int month;
    int year;
};

struct company {
    struct copmany_name company_name;   //название компании
    struct people human[MAX];           //сотрудники компании
    struct finance_status finance;      //финансы компании
    struct company_founding_date date;  //дата основания компании
    char activity[20];                  //деятельность компании(например, строительство итд)
}company;

        //контсрукторы ДОДЕЛАТЬ!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void set_company_name(char title[]) {
}
void set_company(struct copmany_name a, struct people b, struct finance_status c, struct company_founding_date d, char company_activity) {
}
void set_human(char name[], char surname[]) {
}
void set_company_finance(double money) {
    company.finance.money = money;
}
void set_company_founding_date(int day, int month, int year) {
}
void set_company_activity(char activity[]) {
}

        
        //функции ввода объектов через консоль
void input_company_name(struct copmany_name a) {
    printf("\nНазвание компании: "); gets_s(a.title);
    strcpy(company.company_name.title, a.title);
}
void input_human(struct people a) {
    int f;
    printf("Введите данные сотрудника\nЧтобы закончить - нажмите ESC");
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
void input_company_activity(struct company a) {
    printf("\nДеятельность компании: "); gets_s(a.activity);
}

        
        //функции вывода объектов через консоль 
void output_company_name(struct copmany_name a) {
    printf("\nНазвание компании: "); printf("%s", a.title);
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


int main()
{
    setlocale(LC_ALL, "Russian");
    input_human(company.human[MAX]);
    output_human(company.human);
    return 0;
}


