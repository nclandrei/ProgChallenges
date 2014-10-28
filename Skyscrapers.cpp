#include <iostream>
#include <vector>

using namespace std;

void skyscrapers(const vector<int> &heights) {
    int total = 0,current = 0;
    for(int i=1;i<heights.size();i++){
        if(current >=0){
            if(heights[i]<heights[i-1])
                if(current == 0)
                    current = heights[i-1] - heights[i];
                else
                    current += heights[i-1] - heights[i];
            else
                current -= heights[i]-heights[i-1];
            total+=current;}
        else
            current = 0;
    }
    cout << total << endl;
}
