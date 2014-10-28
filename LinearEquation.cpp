#include <iostream>

using namespace std;

void solve_equation(double a, double b) {
    if(a==0)
        cout << "INF";
    else
        cout << (float)-b/a;
}
