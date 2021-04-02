#include <iostream>
#include <utility>
using namespace std;

class DivSeven {
    public:
        static pair <long long ,long long> seven(long long m);
};

int main() {
    long long m=477557101;
    cout << DivSeven::seven(m).first << "," << DivSeven::seven(m).second << endl;
    return 0;
}

pair <long long, long long> DivSeven::seven(long long m) {
    pair <long long, long long> result (m,0);
    while (result.first>99 && ++result.second) result.first=(result.first/10)-2*(result.first % 10);
    return result;
}
            