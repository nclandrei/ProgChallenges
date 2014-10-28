#include <iostream>
#include <vector>
#define suma(a,b) a+b

using namespace std;

void two_numbers_sum(const vector<int> &v, int sum) {
    int flag=1;
    for(int i=0;i<v.size()-1 && flag;i++)
        for(int j=i+1;j<v.size() && flag;j++)
            if(suma(v[i],v[j]) == sum)
                flag=0;
    if(flag)
        cout << 0;
    else
        cout << 1;
}
