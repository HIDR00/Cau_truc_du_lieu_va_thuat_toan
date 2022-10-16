#include <stdio.h>
struct date
{
    int nga, thang, nam;
};
struct SV
{
    char Ma[20];
    char ten[50];
    double gpa;
    char lop[20];
    date ngay;
};

typedef struct SV Sv;
int main()
{
    Sv a;
    scanf("%s", a.Ma);
    printf("%s", a.Ma);
    getchar();
    gets(a.ten);
    printf("%s", a.ten);
    scanf("%d", a.ngay.thang);
    return 0;
}