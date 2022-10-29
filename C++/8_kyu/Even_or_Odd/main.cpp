#include <iostream>
#include <string>
using namespace std; 

string even_or_odd(int number) 
{
    return (number % 2) ? "Odd" : "Even";
}

int main()  { 
    cout << even_or_odd(2) << endl;
    cout << even_or_odd(1)<< endl;
    cout << even_or_odd(0) << endl;
    cout << even_or_odd(7) << endl;
    cout << even_or_odd(-1) << endl;
    return 0; 
}