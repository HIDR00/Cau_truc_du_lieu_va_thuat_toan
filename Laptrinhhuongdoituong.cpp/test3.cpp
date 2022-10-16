#include <bits/stdc++.h>

using namespace std;

class SV
{
private:
    string id, ten, ns;
    double gpa;
    static int dem;

public:
    SV();
    SV(string, string, string, double);
    void nhap();
    void in();
    void tangdem();
    int getdem();
};
int SV::dem = 0;
void SV::tangdem()
{
    ++dem;
}
int SV::getdem()
{
    return dem;
}
void SV::nhap()
{
    ++dem;
    this->id = to_string(dem);
    getline(cin, this->ten);
    cin >> this->ns;
    cin >> this->gpa;
    cin.ignore();
}
void SV::in()
{
    cout << this->id << " ";
    cout << this->ten << " ";
    cout << this->ns << " ";
    cout << this->gpa << endl;
}
SV::SV()
{
    cout << "Doi tuong duoc tao o day\n";
    this->id = this->ten = this->ns = "";
    this->gpa = 0;
}
SV::SV(string id, string ten, string ns, double gpa)
{
    this->id = id;
    this->ten = ten;
    this->ns = ns;
    this->gpa = gpa;
}

int main()
{
    SV x;
    x.nhap();
    x.in();
    SV y;
    y.nhap();
    y.in();
    return 0;
}