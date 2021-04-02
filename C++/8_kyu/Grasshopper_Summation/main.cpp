#include <iostream> 
#include <vector>  
using namespace std; 
 
int summation(int num) {
    int count = 0;
    for(int i=0; i<=num; i++) count += i;
    return count;
}

int main() 
{ 
    cout << summation(1) << endl;
    cout << summation(8) << endl;
    return 0; 
}