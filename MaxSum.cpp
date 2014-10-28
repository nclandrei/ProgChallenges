#include <iostream>
#include <vector>

using namespace std;

void find_max_sum(const vector<int> &v) {
    int s1 = 0, s2 = 0;
    for(int i=0; i< v.size(); i++){
        int s = max(s1, s2 + v[i]);
        s2 = s1;
        s1 = s;
    }
    cout << s1 << endl;
}
