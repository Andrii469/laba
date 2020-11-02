#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
   
    int a, b;

    cout << "First number: ";
    cin >> a;

    cout << "Second number: ";
    cin >> b;

    cout << endl;

     while (b==0)
     { 
         if(a<0)
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b<< endl;
      }
     


    return 0;
}
