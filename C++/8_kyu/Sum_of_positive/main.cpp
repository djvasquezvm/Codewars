#include <iostream>
#include <vector>
using namespace std;

int positive_sum (const std::vector<int> arr){
    int suma=0;  
    for (auto x:arr) if (x>0) suma += x;
    return suma;
}

int main() {
    vector<int> nums = {-1,2,3,4};
    cout << positive_sum(nums) << endl;
    return 0;
}
