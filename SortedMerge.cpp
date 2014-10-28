#include <iostream>
#include <vector>

using namespace std;

void merge_arrays(const vector<int> &a, const vector<int> &b) {
    int c[a.size()+b.size()];
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;}
        else{
            c[k] = b[j];
            j++;}
        k++;
    }
    if(i<a.size())
        for(int z=i;z<a.size();z++){
            c[k] = a[z];
        k++;}
    else
        if(j<b.size())
            for(int z=j;z<b.size();z++){
                c[k] = b[z];
                k++;}
    for(int i=0;i<a.size()+b.size();i++)
        printf("%d ", c[i]);
}  
