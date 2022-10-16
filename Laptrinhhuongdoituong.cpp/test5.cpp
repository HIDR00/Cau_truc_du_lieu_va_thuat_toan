#include <bits/stdc++.h>

using namespace std;
class SV
{
private:
    string id, ten, ns;
    double gpa;

public:
    friend istream &operator>>(istream &in, SV &a);
    friend ostream &operator<<(ostream &out, SV &a);
};
istream &operator>>(istream &in, SV &a)
{
    in >> a.id;
    getline(in, a.ten);
    in >> a.ns >> a.gpa;
    return in;
}
ostream &operator<<(ostream &out, SV &a)
{
    out << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main()
{
    SV x;
    cin >> x;
    cout << x;
    return 0;
}