#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double gcd ( double a, double b )
{
  if ( a==0 ) return b;
  return gcd ( fmod(b,a), a );
}

void compute_fraction(const string &s) {
    double temp = ::atof(s.c_str());
    double r = gcd(temp*10,10);
    cout << temp*10/r << "/" << 10 / r;
}
