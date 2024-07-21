#include <iostream>
using namespace std;
class employee
{
    int empno;
    char empname[30];
    float basicsal, DA, IT, Netsalary;

public:
    void setdata()
    {
        cout << "enter the employee number " << endl;
        cin >> empno;
        cout << "enter the employee name " << endl;
        cin >> empname;

        cout << "enter the employee basic salary  " << endl;
        cin >> basicsal;
    }
    void getdata()
    {
        cout << "the no of employee " << empno << " is " << empname << endl;
        cout << "NEt salary is " << Netsalary << endl;
    }
    void calculate();
};
void employee ::calculate()
{
    DA = 0.52 * basicsal;
    float gs = basicsal + DA;
    IT = 0.3 * gs;
    Netsalary = gs - IT;
}
int main()
{
    employee E[10];
    int n;
    cout << "how many employees?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        E[i].setdata();
    }
    for (int i = 0; i < n; i++)
    {
        E[i].calculate();
        E[i].getdata();
    }
    return 0;
}
