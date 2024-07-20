#include <iostream>
using namespace std;
class maxi
{
    int a, b, c;

public:
    void input()
    {
        cout << "enter the value of a , b and c:" << endl;
        cin >> a >> b >> c;
    }
    void maximum()
    {
        if (a > b && a > c)
        {
            cout << a << " is maximum" << endl;
        }
        else if (b > a && b > c)
        {
            cout << b << " is maximum" << endl;
        }
        else
            cout << c << " is maximum" << endl;
    }
    void minimum()
    {
        if (a < b && a < c)
        {
            cout << a << " is minimum" << endl;
        }
        else if (b < a && b < c)
        {
            cout << b << " is minimum" << endl;
        }
        else
            cout << c << " is minimum" << endl;
    }
};
int main()
{
    maxi m;
    m.input();
    m.maximum();
    m.minimum();
    return 0;
}