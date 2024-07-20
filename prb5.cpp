#include <iostream>
using namespace std;
class employee
{
   static int empcount;
   static int engcount;
   static int mngrcount;

   string name;
   string designation;

public:
   void getinput() 
   {
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter designation (Engineer/Manager): ";
      cin >> designation;
      countemployee();
   }
   static void showcount()
   {
      cout << "the total number of engineer count: " << engcount << endl;
      ;
      cout << "the total number of manager count: " << mngrcount << endl;

      cout << "the total number of employee is :" << empcount << endl;
   }

private:
   void countemployee()
   {
      if (designation == "engineer" || designation == "Engineer")
      {
         engcount++;
         empcount++;
      }
      else if (designation == "manager" || designation == "Manager")
      {
         mngrcount++;
         empcount++;
      }
      else
      {
         empcount++;
      }
   }
};
int employee ::engcount = 0;
int employee ::mngrcount = 0;
int employee ::empcount = 0;
int main()
{
   employee e1, e2, e3;
   e1.getinput();
   e2.getinput();
   e3.getinput();
   employee::showcount(); 
   return 0;
}