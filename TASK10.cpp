#include<iostream>
using namespace std;
main()
{
    string a;

    cout << "Enter the argument 'a': ";
    getline(cin,a);

    a = "something "+a;
    cout << "Result: " << a;
}