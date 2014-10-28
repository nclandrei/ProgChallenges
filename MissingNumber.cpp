#include <iostream>
#include <vector>

void find_missing_number(const vector<int> &v) {
    int s = v[0];
    for(int i=1; i<v.size(); i++)
          s += v[i];
    std::cout << (v.size()+1) * (v.size() + 2) /2 - s << std::endl;
}
