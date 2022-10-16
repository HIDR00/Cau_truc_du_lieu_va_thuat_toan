#include <bits/stdc++.h>
#include <string>

using namespace std;

class SV
{
    friend class GV;

private:
    string id, ten, ns;
    double gpa;
    static int dem;

public:
    SV();
    SV(string, string, string, double);
    void nhap();
    void in();
    friend void inthongtin(SV);
    friend void chuanhoa(SV &);
};

void chuanhoa(SV &a)
{
    string res = "";
    stringstream ss(a.ten);
    string token;
    while (ss >> token)
    {
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++)
        {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
}
void inthongtin(SV a)
{
    cout << a.ten;
}
int SV::dem = 0;

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
class GV
{
private:
    string khoa;

public:
    void update(SV &);
};

void GV::update(SV &x)
{
    x.gpa = 3.14;
}
int main()
{
    SV x;
    x.nhap();
    GV y;
    y.update(x);
    x.in();
    return 0;
}