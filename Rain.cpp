#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void rain(int m, const vector<int> &heights) {
    // Write your code here
    // To print results to the standard output you can use the cout stream
    // Example: cout << "Hello world!";
    int max = -32000;
    for(int i=0;i<heights.size()/m;i++)
        for(int j=0;j<m-1;j++)
            if(abs(heights[i*m + j] - heights[i*m+j+1]) > max)
               max = abs(heights[i*m + j] - heights[i*m+j+1]);
    cout << max << endl;
}
