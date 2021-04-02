#include <iostream> 
#include <vector>  
using namespace std; 

vector<int> maps(std::vector<int> values) {
    for(auto &x:values) x *= 2;
    return values;
}; 

int main() 
{ 
    vector<int> values = {10,2,3,4};
    values = maps(values);
    for (size_t i = 0; i < values.size(); i++) { cout << values[i] << endl; }
    return 0; 
}