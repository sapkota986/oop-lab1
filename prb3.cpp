#include <iostream>
using namespace std;
class medicine
{
    int storeQuantity, orderQuantity;

public:
    void store()
    {
        cout << "enter the store quantity" << endl;
        cin >> storeQuantity;
    }
    void order()
    {
        cout << "enter the order quantity" << endl;
        cin >> orderQuantity;
    }
    void display()
    {
        if (orderQuantity > storeQuantity)
        {
            cout << "No enough quantity" << endl;
        }

        else if (orderQuantity > 16 && storeQuantity <= 40)
        {
            cout << "you cannot order more than 16 item" << endl;
        }
        else
        {
            cout << "your order is accepted" << endl;
        }
    }
};
int main()
{
    medicine m;
    m.store();
    m.order();
    m.display();
    return 0;
}