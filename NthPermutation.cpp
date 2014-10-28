#include <iostream>
#include <vector>

using namespace std;

void nth_perm(const vector<int> &v, int n) {
    int aux;
    for(int i=0; i<n; i++){
        aux = v[n];
        for(int j=v.size()-1; j>0; j--)
            v[j] = v[j-1];
        v[0] = aux;
    }
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}
