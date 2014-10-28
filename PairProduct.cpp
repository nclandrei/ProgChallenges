#include <iostream>
#include <vector>

using namespace std;

void max_prod(const vector<int> &v) {
    int max = v[0], k, max2 = v[0];
    for(int i=1; i<v.size(); i++)
        if(v[i] > max){
            max = v[i];
            k = i;}
    if(max%3 != 0)
        for(int i=1; i<v.size(); i++)    
            if(v[i]%3==0 && v[i]>max2 && i!=k)
                max2 = v[i];
    if(max%3 == 0)
       for(int i=1; i<v.size(); i++)    
            if(v[i]>max2 && i!=k)
                max2 = v[i]; 
    std::cout << max * max2 << std::endl;
}
