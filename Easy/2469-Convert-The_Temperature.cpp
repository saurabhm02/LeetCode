//https://leetcode.com/problems/convert-the-temperature/

#include<bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

vector<double> convertTemperature(double celsius) {
    double kel = celsius + 273.15;
    double fah = celsius * 1.80 + 32.00;

    vector<double>v;
    v.push_back(kel);
    v.push_back(fah);
    return v;
}

int main()
{   
    double cel;
    cin>>cel;
    vector<double> res = convertTemperature(cel);
    cout<<res;
    return 0;
}