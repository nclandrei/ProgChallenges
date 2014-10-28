#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void relative_sort(const vector<int> &v) {
    int i,j;
    int a[v.size()],k=0;
    for(i=0;i<v.size();i++)
        if(v[i] <0){
            a[k] = v[i];
        k++;}
    
    for(i=0;i<v.size();i++)
        if(v[i] >= 0){
            a[k] = v[i];
        k++;}
    for(i=0;i<v.size();i++)
        cout << a[i] << " ";
}
