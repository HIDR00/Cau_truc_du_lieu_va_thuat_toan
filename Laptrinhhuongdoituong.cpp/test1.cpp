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
    double Getgpa();
    void nhap();
    void in();
};
void SV::nhap()
{
    cin >> this->id;
    cin.ignore();
    getline(cin, this->ten);
    cin >> this->ns;
    cin >> this->gpa;
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
double SV::Getgpa()
{
    return this->gpa;
}
void xapxep(SV a[], int n)
{
    SV tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].Getgpa() > a[j].Getgpa())
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int value = 10;

    int *ptr = &value;
    cout << *ptr << "\n"; // in giá trị tại địa chỉ ptr trỏ đến (biến value)

    int **ptr_ptr = &ptr;
    cout << ptr_ptr << "\n";   // con trỏ "ptr_ptr" trỏ đến con trỏ "ptr" trỏ đến biến "value"
    cout << *ptr_ptr << "\n";  // in giá trị tại địa chỉ ptr_ptr trỏ đến (địa chỉ ptr (&ptr))
    cout << **ptr_ptr << "\n"; // dereference 2 lần để in giá trị tại địa chỉ ptr trỏ đến (biến value)
    return 0;
}