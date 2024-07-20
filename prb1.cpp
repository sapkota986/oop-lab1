#include <iostream>
using namespace std;
class Distance
{
    float feet, inches;

public:
    void inputdistance()
    {
        cout << "enter feet amd inches" << endl;
        cin >> feet >> inches;
    }

    void display()
    {
        cout << feet << "feet  " << inches << "inches" << endl;
    }
    void add(Distance d1, Distance d2)
    {

        inches = d1.inches + d2.inches;

        feet = d1.feet + d2.feet;
        if (inches >= 12)
        {

            feet = feet + inches / 12;
            inches = int(inches) % 12;
        }
    }
};
int main()
{
    Distance d1, d2, d3;
    d1.inputdistance();
    cout << "first distance :" << endl;
    d1.display();
    d2.inputdistance();
    cout << "second distance:" << endl;
    d2.display();
    cout << "after addition:" << endl;
    d3.add(d1, d2);
    d3.display();
    return 0;
}