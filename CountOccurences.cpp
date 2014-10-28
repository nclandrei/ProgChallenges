#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int> asd,int low, int high, int n){
    if(low<=high){
        int mid = (low+high)/2;
        if(asd[mid] == n)
            return mid;
        else
            if(asd[mid] > n)
                return binary_search(asd,low,mid-1,n);
            else
                if(asd[mid] < n)
                    return binary_search(asd,mid+1,high,n);
        }
        return -1;
}

void count_occurences(const vector<int> &v, int k) {

    int result = 0;
    int position = binary_search(v,0,v.size()-1,k);
    if(position != -1){
        result = 1;
        int i=position-1,j=position+1;
        while(i>=0 && j<v.size() && (v[j] == k || v[i] == k)){
            if(v[j]==k){
                result++;
                j++;}
            if(v[i]==k){
                result++;
                i--;}
        }
    }
    cout << result << endl;
}
