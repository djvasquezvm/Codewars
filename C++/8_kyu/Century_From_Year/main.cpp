#include <iostream>
#include <cmath> 
using namespace std; 
 
int centuryFromYear(int year) {
    return (ceil(year/100.0));
}

int main()  { 
    cout << centuryFromYear(1705) << endl;
    cout << centuryFromYear(1900) << endl;
    cout << centuryFromYear(1601) << endl;
    cout << centuryFromYear(2000) << endl;
    cout << centuryFromYear(9179) << endl;
    return 0; 
}