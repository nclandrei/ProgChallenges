#include <iostream>
#include <vector>

void longest_improvement(const vector<int> &grades) {
    int max = 1,k=1;
    for(int i=0;i<grades.size()-1;i++){
        if(grades[i] <= grades[i+1])
            k++;
        else
            k=1;
        if(max<k)
            max=k;}
    std::cout << max << std::endl;
}
