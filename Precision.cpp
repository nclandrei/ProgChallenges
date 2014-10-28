#include <iostream>
#define max(a,b) (a>b)?a:b

using namespace std;

void precision(double p1, double p2, int v) {
    int maxim = (int) max(p1,p2)*100;
    cout << maxim << endl;
    if(v/maxim <=1)
        cout << maxim << " " << 0 << endl;
    else
        cout << v/maxim << " " << 100-v/maxim << endl;
}
