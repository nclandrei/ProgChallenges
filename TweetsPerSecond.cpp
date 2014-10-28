#include <iostream>
#include <vector>
#include <cmath>
#include <cctype>
#define maxim(a,b,c) ((a>b)?((a>c)?a:c):((b>c)?b:c))
#define maxim1(a,b) ((a>b)?a:b)

using namespace std;

int maxFun(const vector<int> &asd, int first_var, int second_variable){
    int maximus = asd[first_var];
    int z;
    for(z=first_var; z<=second_variable; z++)
        if(maximus<asd[z])
            maximus = asd[z];
    return maximus;
}

void tweets_per_second(const vector<int> &tps, int k) {
    int first_var,second_variable,maximus,length_of_tps=tps.size();
    maximus=tps[0];
    for(first_var=0;first_var<=k-1;first_var++){
            if(maximus<tps[first_var])
                maximus = tps[first_var];
        printf("%d\n", maximus);
    }
    for(first_var=k;first_var<length_of_tps;first_var++){
        maximus = maxFun(tps,first_var-k+1,first_var);
        printf("%d\n", maximus);
    }
}
