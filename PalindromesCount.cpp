#include <iostream>
#include <string>

using namespace std;

int isPalindrome(const string str){
    int i=0,n = str.length();
    while(i<n/2)
        if(str[i] == str[n-i-1])
            i++;
        else
            return 0;
    return 1;
}

/* 
    Time complexity is O(N) because, as we are dividing the problem into
    smaller subproblems, we will have the following number of cases:
    O(N) = N + N/2 + N/3 + ... + 1 = N(1 + 1/2 + 1/3+...) = N (as we are dropping the
    sum that has the limit one!
*/

void count_palind(const string &s) {
    int counter = 0;
    int n = s.length();
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n-i;j++)
            if(isPalindrome(s.substr(j,i)))
        counter++;
    cout << counter << endl;      
}
