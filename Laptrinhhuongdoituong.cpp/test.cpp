#include <bits/stdc++.h>

using namespace std;

class SV
{
private:
    string id, ten, ns;
    double gpa;

public:
    SV();
    SV(string, string, string, double);
    void xinchao()
    {
        cout << "Hello\n";
    }
    void dihoc();
    ~SV();
};
SV::SV()
{
    cout << "Doi tuong duoc tao o day\n";
    id = ten = ns = "";
    gpa = 0;
}
SV::SV(string ma, string name, string birth, double diem)
{
    cout << "Ham thu 2\n";
    id = ma;
    ten = name;
    ns = birth;
    gpa = diem;
}
void SV::dihoc()
{
    cout << "di hoc\n";
}
SV::~SV()
{
    cout << "doi tuong duoc huy\n";
}
void abc()
{
    SV x;
}
int main()
{
    abc();
    cout << "Xin chao\n";
    if (1)
    {
        SV x;
    }
    cout << "Hello";
    return 0;
}