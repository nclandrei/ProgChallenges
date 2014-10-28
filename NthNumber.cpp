#include <iostream>
#include <vector>

using namespace std;

/* Time complexity: O(nlogn)
    if you want to do it in O(n), then you will have to trade time complexity
    with space complexity.
    Algorithm for O(n) complexity: you can initialize a priority queue containing v's elements
    and then you pop, one by one, n elements.
*/


void quicksort(int asd[],int low,int high){
    int i = low;
    int j = high;
    int pivot = asd[low+(high-low)/2];
    int aux;
    while(i<=j){
        while(asd[i]<pivot)
            i++;
        while(asd[j]>pivot)
            j--;
        if(i<=j){
            aux = asd[i];
            asd[i] = asd[j];
            asd[j] = aux;
            i++;j--;}
    }
    if(i<high)
        quicksort(asd,i,high);
    if(j>low)
        quicksort(asd,low,j);
}

void nth_number(const vector<int> &v, int n) {
    int asd[v.size()];
    for(int i=0;i<v.size();i++)
        asd[i] = v[i];
    quicksort(asd,0,v.size()-1);
    printf("%d", asd[v.size()-n]);
}
