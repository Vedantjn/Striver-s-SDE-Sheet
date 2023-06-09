#include<iostream>
using namespace std;

int strStr(string s, string x){
    int ns= s.size();
    int nx = x.size();

    if(ns < nx){
        return -1;
    }

    for(int i = 0; i <= (ns-nx); i++){
        bool ok = 1;
        for(int j = 0; j < nx; j++){
            if(s[i+j] != x[j]){
                ok = 0;
            }
        }
        if(ok){
            return i;
        }
    }
    return -1;
}

int main(){
    string haystack = "hello";
    string needle = "ll";
    cout << strStr(haystack, needle);
    return 0;
}