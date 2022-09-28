#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


struct people {
    char first_name[20];
    char second_name[20];
};

struct finance_status {
    double money;
};

struct copmany_name {
    char title[20];
};

struct company_founding_date {
    int day;
    int month;
    int year;
};

struct company {
    
    //объекты
    struct copmany_name company_name;   //название компании
    struct people human[100];           //сотрудники компании
    struct finance_status finance;      //финансы компании
    struct company_founding_date date;  //дата основания компании
    char activity[20];                  //деятельность компании(например, строительство итд)

    //функции для структуры
public: 
    //конструкторы
    void set_company(struct people a, struct finance_status b, struct copmany_name c, char company_activity) {
    }
    void set_human(char name, char surname) {
    }
    void set_company_finance(double money) {
    }
    void set_company_name(char title) {
    }
    void set_company_founding_date(int day, int month, int year) {
    }

    //функции ввода объектов через консоль
    void input_company_name(struct copmany_name a) {
        printf("\nНазвание компании: "); gets_s(a.title);
    }
    void input_human(struct people a) {
        printf("Введите данные сотрудника\nЧтобы закончить - введите пробел");
        int i = 0;
        do {
            printf("\nИмя: "); gets_s(a.first_name);
            printf("\nФамилия: "); gets_s(a.second_name);
            i++;
        } while (getchar() != 32);
    }
    void input_finance(struct finance_status a) {
        printf("\nФинансы компании: "); scanf("%lf", &a.money);
    }
    void input_company_founding_date(struct company_founding_date a) {
        printf("\nВведите дату основания компании"); 
        printf("\nДень: "); scanf("%d", &a.day);
        printf("\nМесяц: "); scanf("%d", &a.month);
        printf("\nГод: "); scanf("%d", &a.year);
    }
    void input_company_activity(struct company a) {
        printf("\nДеятельность компании: "); gets_s(a.activity);
    }

    //функции вывода объектов через консоль
    void output_human(struct people a) {
        printf("Введите данные сотрудника\nЧтобы закончить - введите пробел");
        int i = 0;
        do {
            printf("\nИмя: "); gets_s(a.first_name);
            printf("\nФамилия: "); gets_s(a.second_name);
            i++;
        } while (getchar() != 32);
    }
    void output_finance(struct finance_status a) {
        printf("\nФинансы компании: "); scanf("%lf", &a.money);
    }
    void output_company_name(struct copmany_name a) {
        printf("\nНазвание компании: "); gets_s(a.title);
    }
    void output_company_founding_date(struct company_founding_date a) {
        printf("\nВведите дату основания компании");
        printf("\nДень: "); scanf("%d", &a.day);
        printf("\nМесяц: "); scanf("%d", &a.month);
        printf("\nГод: "); scanf("%d", &a.year);
    }
    void output_company_activity(struct company a) {
        printf("\nДеятельность компании: "); gets_s(a.activity);
    }
};



int main()
{
    return 0;
}


