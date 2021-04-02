#include <iostream>
#include <string>

class TwoToOne {
    public:
      static std::string longest (const std::string & s1, const std::string & s2);    
};

int main() {
    std::cout << TwoToOne::longest("aaaa", "aasdasd");
    return 0;
}

std::string TwoToOne::longest (const std::string & s1, const std::string & s2) {
    std::string s3=s1+s2;
    char ct;
    for (int i=0;i<s3.size();i++) {
        int j=i+1;
        while (j<s3.size ()) {
            if (s3[i] == s3[j])
            s3.erase (j,1);
            else j++;
        }
    }
    for (int i=0;i<s3.size();i++) {
        for(int j=i+1;j<s3.size();j++) {
            if(s3[i]>s3[j]) {
                ct=s3[i];
                s3[i]=s3[j];
                s3[j]=ct;
            }
        }
    }
    return s3;
}


