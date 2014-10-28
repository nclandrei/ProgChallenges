#include <iostream>
#include <vector>

using namespace std;

void majority(const vector<int> &v) {
    int counter = 0, majorityNumber;
    for(int i=0; i<v.size(); i++){
        if(counter==0)
            majorityNumber = v[i];
        if(v[i] == majorityNumber)
                counter++;
            else
                counter--;
        }
    counter=0;
    for(int i=0; i<v.size(); i++)
        if(v[i] == majorityNumber)
            counter++;
    if(counter > v.size()/2)
        cout << majorityNumber;
    else
        cout << "None";
        
}
