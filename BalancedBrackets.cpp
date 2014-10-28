#include <iostream>
#include <cstring>

using namespace std;

void balanced_brackets(const string &s) {
    if(s.length()%2!=0)
        cout << "Unbalanced";
    else{
        int n = s.length();
        int i=0,flag=1;
        while(i<n/2-1 && flag){
            if(s[i] == '(' && s[n-i-1] == ')')
                i++;
            else 
                flag = 0;}
        if(flag)
            cout << "Balanced";
        else
            cout << "Unbalanced";
    }
}
