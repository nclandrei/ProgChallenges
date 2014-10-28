#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int positions[4] = {0};

/* The firstfourmax function would be needed only if we worked our way
   using these values and then, with binary search, go through the array and
   see if we found values to add up to S 
*/


void firstFourMax(vector<int> a){
    int i;
    int indexOne = -1, indexTwo = -1, indexThree = -1, indexFour = -1;
    int max1 = INT_MIN,max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN;
    for(i=0;i<a.size();i++)
        if(a[i] > max1){
            max1 = a[i];
        indexOne = i;}
    for(i=0;i<a.size();i++)
        if(a[i] > max2 && i!=indexOne){
            max2 = a[i];
        indexTwo = i;}
    for(i=0;i<a.size();i++)
        if(a[i] > max3 && i!=indexOne && i!=indexTwo){
            max3 = a[i];
        indexThree = i;}
    for(i=0;i<a.size();i++)
        if(a[i] > max4 && i!=indexOne && i!=indexTwo && i!=indexThree){
            max4 = a[i];
        indexFour = i;}
    positions[0] = indexOne;
    positions[1] = indexTwo;
    positions[2] = indexThree;
    positions[3] = indexFour;
}

void tuple_sum(const vector<int> &a, int s) {
    int i,j,k,l;
    int flag=1;
    int n = a.size();
    for(i=0;i<n-3 && flag;i++)
        for(j=i+1;j<n-2 && flag;j++)
            for(k=j+1;k<n-1 && flag;k++)
                for(l=k+1; l<n && flag; l++)
                    if(a[i]+a[j]+a[k]+a[l] == s){
                        cout << i << " " << j << " " << k << " " << l;
        flag=0;}
    
}
